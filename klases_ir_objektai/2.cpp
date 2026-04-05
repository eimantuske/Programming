#include <iostream>
#include <string>

using namespace std;

class car {
    public:
        string brand;
        string model;
        int year;
        string rida;
        car(string x, string y, int z, string r) { // Constructor with parameters
            brand = x;
            model = y;
            year = z;
            rida = r;
        }

};

int main(){
    car masina("Toyota", "Camry", 2020, "500k");
    car masina2("BMW", "X5", 2021, "300k");

    cout << masina.brand << " " << masina.model << " " << masina.year << " " << masina.rida << endl;

    cout << "============" << endl;

    cout << masina2.brand << " " << masina2.model << " " << masina2.year << " " << masina2.rida << endl;    
    
    return 0;
}