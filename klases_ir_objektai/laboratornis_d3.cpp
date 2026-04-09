//Sukurkite klasę Knyga, kuri reprezentuotų bibliotekos leidinį. Klasė turi turėti 
//viešus duomenų laukus: pavadinimas, autorius ir puslapiai. Sukurkite metodą spausdinti(), 
//kuris išvestų informaciją apie knygą į ekraną. main() funkcijoje sukurkite du šios 
//klasės objektus su skirtingais duomenimis ir iškvieskite jų spausdinimo metodus.

#include <iostream>
#include <string>

using namespace std;

class knyga{
    private: // duomenų laukai, kurie yra privatūs
        string pavadinimas;
        string autorius;
        int puslapiai;

    public: // vieši metodai, kurie yra prieinami iš išorės
        void setknyga(string p, string a, int pusl){
            pavadinimas = p;
            autorius = a;
            puslapiai = pusl;
        };
        
        void spausdinti(){ // metodas, kuris išveda informaciją apie knygą į ekraną
            cout << "====================" << endl;
            cout << "Pavadinimas: " << pavadinimas << endl;
            cout << "Autorius: " << autorius << endl;
            cout << "Puslapiai: " << puslapiai << endl;
            cout << "====================\n" << endl;
        };
};

int main(){
    knyga leidinys;
    knyga leidinys2;

    leidinys.setknyga("Metamorfozė", "Franz Kafka", 200);
    leidinys2.setknyga("1984", "George Orwell", 300);

    leidinys.spausdinti();
    leidinys2.spausdinti();

    return 0;
}