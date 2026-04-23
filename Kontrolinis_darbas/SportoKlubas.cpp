#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class Narys {
    private:

        string vardas;
        string pavarde;
        int metai;
        double MetinisMokestis;
    public:
        Narys(string vardas, string pavarde, int metai, double MetinisMokestis)
        {
            if(MetinisMokestis < 0) {
                throw invalid_argument("Metinis mokestis negali būti neigiamas.");
            };
            if(metai < 16|| metai > 100) {
                throw invalid_argument("Amžius turi būti tarp 16 ir 100 metų.");
            };
            if(vardas.empty() || pavarde.empty()) {
                throw invalid_argument("Vardas ir pavardė negali būti tušti.");
            };
            this -> vardas = vardas;
            this -> pavarde = pavarde;
            this -> metai = metai;
            this -> MetinisMokestis = MetinisMokestis;
        };
        string getVardas() const{
            return vardas;
        };

        double getMetinisMokestis() const
        {
            return MetinisMokestis;
        };

        virtual double SkaiciuotiMokesti() {
            return MetinisMokestis;
        };

        virtual ~Narys() {}
    };

class VipNarys : public Narys {
    private:
        const double VipNuolaida = 0.35;
    public:
        VipNarys(string vardas, string pavarde, int metai, double MetinisMokestis) : Narys(vardas, pavarde, metai, MetinisMokestis) {
            this -> VipNuolaida;
        };
        virtual double SkaiciuotiMokesti() override {
            return getMetinisMokestis() * (1 - VipNuolaida);
        };
    };

Narys* sukurtiNari() {
    string vardas, pavarde;
    int metai;
    int VipStatus;

    cout << "Įveskite nario vardą: ";
    cin >> vardas;
    cout << "Įveskite nario pavardę: ";
    cin >> pavarde;
    cout << "Įveskite nario amžių: ";
    cin >> metai;
    cout << "Įveskite nario Vip statusą (1 - Vip, 0 - ne Vip): ";
    cin >> VipStatus;
    double mokestis = 1260.0; 
    try {
        if (VipStatus == 1) {
            return new VipNarys(vardas, pavarde, metai, mokestis);
        } else {
            return new Narys(vardas, pavarde, metai, mokestis);
        }
    } catch (const invalid_argument& e) {
        cerr << "Klaida: " << e.what() << endl;
        return nullptr;
    }
};

int main() { 

    char pasirinkimas;

    cout << "\nSveiki atvykę į sporto klubą!\n" << endl;
    cout << "Ar norite registruotis kaip narys? (y/n): ";
    cin >> pasirinkimas;

    switch (pasirinkimas) {
        case 'y':
        {
            cout <<"\n"<<endl;
            cout << "--- Nario registracija ---" << endl;
            Narys* naujasNarys = sukurtiNari();

            if (naujasNarys != nullptr) {
                cout << "\nRegistracija sekminga!" << endl;
                cout << naujasNarys->getVardas() << " metinis mokestis: " << naujasNarys->SkaiciuotiMokesti() << " EUR\n" << endl;  
            
                delete naujasNarys;
            }
        }
            break;
        case 'n':
            cout << "Ačiū, kad apsilankėte mūsų sporto klube. Iki pasimatymo!" << endl;
            return 0;
        default:
            cout << "Neteisingas pasirinkimas. Prašome įvesti 'y' arba 'n'." << endl;
            return 0;
    }

    return 0;
}