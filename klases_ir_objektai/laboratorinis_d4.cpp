//Sukurite klasę BankoSaskaita, kur visi duomenų laukai (savininkas, balansas) 
//turi būti privatūs. Sukurkite konstruktorių pradiniams duomenims nustatyti. 
//Realizuokite get metodus duomenų peržiūrai ir viešus metodus idetiPinigus(suma) 
//bei isimtiPinigus(suma). isimtiPinigus metodas neturi leisti nuimti daugiau pinigų, 
//nei yra sąskaitoje.

#include <iostream>
#include <string>

using namespace std;

class bankosaskaita {
    private:
        string svininkas;
        double balansas;

    public:
        bankosaskaita(string sav, double bal) { // konstruktorius pradiniams
            svininkas = sav;
            balansas = bal;
        };
        int addbalansas() {
            double suma;
            cout << "Iveskite suma, kuri norite ideti: ";
            cin >> suma;
            balansas += suma;
            cout << "Jusu naujas balansas yra: " << balansas << endl;
        };
        int isimtiPinigus() {
            double suma;
            cout << "Iveskite suma, kuri norite isimti: ";
            cin >> suma;
            if (suma > balansas) {
                cout << "Nepakanka pinigu saskaitoje!" << endl;
            } else {
                balansas -= suma;
                cout << "Jusu naujas balansas yra: " << balansas << endl;
            }
        };
        void checkbalansas() {
            cout << "Savininkas: " << svininkas << endl;
            cout << "Balansas: " << balansas << endl;
        };
        void menu() {
            cout << "====================" << endl;
            cout << "bankomatas, sveiki atvykę!" << endl;
            cout << "pasirinkite veiksmą: " << endl;
            cout << "1. Peržiūrėti balansą " << endl;
            cout << "2. Įdėti pinigus " << endl;
            cout << "3. Išimti pinigus " << endl;
            cout << "4. Išeiti " << endl;
            cout << "====================" << endl;
        };


        
};
int main() {
    bankosaskaita saskaita("Jonas", 1000); // sukuriame banko sąskaitą su pradiniu balansu
    saskaita.menu(); // iškviečiame meniu funkciją
    int funkcija;
    while (funkcija != 4){

    cin >> funkcija; // vartotojas pasirenka veiksmą
    

    switch (funkcija) {
        case 1:
            saskaita.checkbalansas(); // peržiūrime balansą
        
        case 2:
            saskaita.addbalansas();// įdedame pinigus
            
        case 3:
            saskaita.isimtiPinigus();// išimame pinigus
            
        case 4:
            cout << "Ačiū, kad naudojotės mūsų bankomatu! Iki pasimatymo!" << endl; // išeiname iš programos
            break;
        default:
            cout << "Neteisingas pasirinkimas!" << endl;// jei vartotojas įveda neteisingą pasirinkimą
            
    };
}
    return 0;
}
//reikia padaryti taip kad zmogus galetu paziureti ir isimesti ir isismti pinigus.