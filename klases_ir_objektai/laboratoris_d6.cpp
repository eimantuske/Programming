//Sukurkite bazinę klasę Figura su virtualiu metodu skaiciuotiPlota(). 
//Sukurkite dvi išvestines klases: Kvadratas (kraštinė a) ir Apskritimas (spindulys r). 
//Perrašykite plotų skaičiavimo metodus. main funkcijoje sukurkite bazinės klasės rodyklių masyvą, 
//kuriame saugomi abu objektai, ir ciklo pagalba iškvieskite jų plotų skaičiavimą.

#include <iostream>
#include <cmath>

using namespace std;

class figura {
    public:
        virtual double skaiciuotiplota() = 0;

        virtual ~figura() {}
};

class kvadratas :public figura {
    private:
    double a;
    public:
        kvadratas(double a) {
            this -> a = a;
    };
        double skaiciuotiplota() override {
        return a * a;
    };
};

class apskritimas :public figura {
    private:
        string pav;
        double r;
    public:
        apskritimas(double r){
            this -> r = r;
    };
        double skaiciuotiplota() override{
            return M_PI * r * r;
    };
        void pavadinimas(string pav) {
            this -> pav = pav;         
        };

};

int main() {
    figura* figura [2];

    figura[0] = new kvadratas(5);
    figura[1] = new apskritimas("pav",10);

    for (int i = 0; i < 2; i++) {
        cout << figura[i].pavadinimas() << " figuros plotas: " << figura[i] -> skaiciuotiplota() << endl;
    };
    
    delete figura[0];
    delete figura[1];

    return 0;
};

