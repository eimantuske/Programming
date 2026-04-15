//Sukurkite bazinę klasę EMPLOYEE su laukais name ir salary. Sukurkite išvestinę klasę MANAGER, 
//kuri paveldi EMPLOYEE savybes ir papildomai turi lauką commissions. Realizuokite metodą countSalary(), 
//kuris menedžeriui grąžintų atlyginimą kartu su priedu.

#include <iostream>
#include <string>

using namespace std;    

class employee {
    protected:
        string vardas;
        double atlyginimas;
    public:
        void setemployee(string v, double a) {
            vardas = v;
            atlyginimas = a;
        };
        void rodytiemployee() {
            cout << "====================" << endl;
            cout << "Vardas: " << vardas << endl;
            cout << "Atlyginimas: " << atlyginimas << endl;
            cout << "====================" << endl;
        };
};

class manager :public employee {
    private:
        double priedas;
    public:
        void setmanager(string v, double a, double p) {
            setemployee(v, a);// paveldi employee savybes
            priedas = p;// papildomai turi lauką commissions
        };
        void rodytiemployee() {
            employee::rodytiemployee(); // paveldi employee savybes
            cout << "Priedas: " << priedas << endl;
            cout << "====================" << endl;
        };
        double countsalary() {
               return priedas + employee::atlyginimas; // grąžintų atlyginimą kartu su priedu
            };       
};

int main(){
    manager vadovas;
    vadovas.setmanager("Jonas", 2000, 500);
    vadovas.rodytiemployee();
    cout << "Bendras atlyginimas su priedu: " << vadovas.countsalary() << endl;
    int a 
    cin >> a;
    cout <<



    return 0;
}