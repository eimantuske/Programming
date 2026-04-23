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

int main() {
    Narys* narys1 = new Narys("Jonas", "Jonaitis", 30, 1000);
    VIPnarys* vipNarys1 = new VIPnarys("Petras", "Petraitis", 70, 1500, 0.45, 0.25);
    
    cout << narys1->getVardas() << " metinis mokestis: " << narys1->SkaiciuotiMokesti() << " EUR" << endl;
    cout << vipNarys1->getVardas() << " metinis mokestis: " << vipNarys1->SkaiciuotiMokesti() << " EUR" << endl;

    return 0;
};