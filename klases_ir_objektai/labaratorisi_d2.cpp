#include  <iostream>
#include <string>

using namespace std;

class studentas {
    private:
        string vardas;
        string pavarde;
        int amzius;
        string kursas;

    public:
        void setstudentas(string v, string p, int a, string k) {
            vardas = v;
            pavarde = p;
            amzius = a;
            kursas = k;
        }
        void displaystudentas() {
            cout << "====================" << endl;
            cout << "Vardas: " << vardas << endl;
            cout << "Pavarde: " << pavarde << endl;
            cout << "Amzius: " << amzius << endl;
            cout << "Kursas: " << kursas << endl;
            cout << "====================" << endl;
        }
        void fakultetas() {
            cout << "Sudento fakultetas: \n" << endl;
        }

};

class technikos : public studentas {
    public:
        void fakultetas() {
            cout << " mokinasi technikos fakultete\n" << endl;
        };
};

class elektornikos : public studentas {
    public:
        void fakultetas() {
            cout  << " mokinas elektronikos fakultete\n" << endl;
        };

};

int main() {
    studentas stud; // sukuriame studento objektą
    studentas stud2; // sukuriame antrą studento objektą
    technikos tech;
    elektornikos ele;


    stud.setstudentas("Petras", "Jonaitis", 20, "Informatika"); // nustatome studento duomenis
    stud2.setstudentas("Jonas", "Petraitis", 22, "Matematika"); // nustatome anthro studento duomenis

    stud.displaystudentas();// isvedame studento duomenis
    tech.fakultetas(); // isvedame technikos fakulteto pavadinimą
    stud2.displaystudentas(); // isvedame antro studento duomenis
    ele.fakultetas(); // isvedame elektronikos fakulteto pavadinimą


    return 0;
}
// protected - kai  is isores negalima pasiekti bet matoma
// private - kai is isores negalima pasiekti ir nematoma
// public - kai is isores galima pasiekti ir matoma