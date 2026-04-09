// Automobilių programa
#include <iostream>
#include <string>

using namespace std;

class car {
    private:
        int kaina; // Private member variable
    public:
        string brand;
        string model;
        int year;
        string rida;
        car(string x, string y, int z, string r); // Constructor with parameters turi tapati pavadinima kaip ir klasės atributai

        void setkaina(int k) { // Setter for kaina
            kaina = k;
        };
        int getkaina() { // Getter for kaina
            return kaina;
        };
        void honk() {
            cout << "Beep beep!" << endl;
        };
        void klase() {
            cout << "Sio automobilio kategorija yra: " << endl;
        };

};

class vehicle {
    public:
        string model = "volvo"; 
};

car::car(string x, string y, int z, string r) { // Constructor definition
    brand = x;
    model = y;
    year = z;
    rida = r;
};

class lengvasisAutomobilis : public car {
};

class sunkvezimis : public car {
};



int main(){
    car masina("Toyota", "Camry", 2020, "500k"); 
    car masina2("BMW", "X5", 2021, "300k"); 

    masina.setkaina(20000); // Setting price for masina
    masina2.setkaina(35000); // Setting price for masina2
    
    cout <<endl<< "============" << endl;
    cout << masina.brand <<endl << masina.model <<endl<< masina.year <<endl << masina.rida << endl;
    cout << "Kaina: " << masina.getkaina() << " EUR" << endl;

    cout << "============" << endl;

    cout << masina2.brand <<endl<< masina2.model <<endl<< masina2.year <<endl << masina2.rida << endl;
    cout << "Kaina: " << masina2.getkaina() << " EUR" << endl;
      cout << "============" << endl;
    cout <<endl;

    vehicle garsas;

    cout << "Model " << garsas.model<<" sako :" << endl;
    masina.honk();

    cout <<endl<< "============" << endl;
    masina.klase();
    


    return 0;
}