//C++ programa kuri leidzia ivesti darbuotoju duomenis,
//saugo juos strukturoje ir atlieka paieska pagal skyriaus numeri.

#include <iostream>
#include <string>

using namespace std;

struct employee {
    string vardas;
    string numeris;
    double atlyginimas;
    int tel_numeris;
    int skyriaus_numeris;
};

void ivedimas(employee darbuotojai[], int n);
int paieska(employee darbuotojai[], int n, int find);
void paieska_isvedimas(employee darbuotojai[], int n, int find);


int main(){
cout << "Iveskite darbuotoju skaiciu:  ";
    int n;
    int find;

    cin >> n;

    employee darbuotojai[n];
    ivedimas(darbuotojai, n);

    char testi;
    
    do {
        cout << "\n--- PAIESKA ---" << endl;
        cout << "Iveskite darbuotojo skyriaus numeri: ";
        int find;
        cin >> find;

        int index = paieska(darbuotojai, n, find);

        if (index != -1) {

            paieska_isvedimas(darbuotojai, n, find);

        } 
        cout << "Ar norite atlikti kita paieska? (y/n): ";
        cin >> testi;

    } while (testi == 'y' || testi == 'Y');

    cout << "Programa baigta!" << endl;
    return 0;
}
void ivedimas(employee darbuotojai[], int n){
    for(int i = 0; i < n; i++){
        
        cout << "Iveskite darbuotojo "<< i + 1 << " varda:  ";
        cin >> darbuotojai[i].vardas;
        cout << "Iveskite darbuotojo "<< i + 1 << " numeri:  ";
        cin >> darbuotojai[i].numeris;
        cout << "Iveskite darbuotojo "<< i + 1 << " atlyginima:  ";
        cin >> darbuotojai[i].atlyginimas;
        cout << "Iveskite darbuotojo "<< i + 1 << " telefono numeri:  ";
        cin >> darbuotojai[i].tel_numeris;
        cout << "Iveskite darbuotojo "<< i + 1 << " skyriaus numeri:  ";
        cin >> darbuotojai[i].skyriaus_numeris;
        cout << "|===========================================|" << endl;

    }
    cout << "Uzpildete "<<n<<" darbuotoju duomenis!" << endl;
}
int paieska(employee darbuotojai[], int n, int find){

    for(int i = 0; i < n; i++){
        if(darbuotojai[i].skyriaus_numeris == find){
            return i;
        }
    }
            cout << "Toks darbuotojas nerastas!" << endl;
            return -1;
    
}
void paieska_isvedimas(employee darbuotojai[], int n, int find){
    for(int i = 0; i < n; i++){
        if(darbuotojai[i].skyriaus_numeris == find){
            cout << "|===========================================|" << endl;
            cout << "Darbuotojo vardas: " << darbuotojai[i].vardas << endl;
            cout << "Darbuotojo numeris: " << darbuotojai[i].numeris << endl;
            cout << "Darbuotojo atlyginimas: " << darbuotojai[i].atlyginimas << endl;
            cout << "Darbuotojo telefono numeris: " << darbuotojai[i].tel_numeris << endl;
            cout << "Darbuotojo skyriaus numeris: " << darbuotojai[i].skyriaus_numeris << endl;
            cout << "|===========================================|" << endl;
        }
    }
}