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

int paieska(employee darbuotojai[], int n, int find);


int main(){
cout << "Iveskite darbuotoju skaiciu:  ";
    int n;
    int find;

    cin >> n;

    employee darbuotojai[n];

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
    cout << "Paieska   " <<endl;
    cout << "iveskite darbuotojo skyriaus numeri:  " <<endl;
    cin >> find;

    int rado = paieska(darbuotojai, n, find);

    if(rado == -1){
        return 0;
    }

    cout << "|===========================================|" << endl;
    cout << "Darbuotojo vardas: " << darbuotojai[rado].vardas << endl;
    cout << "Darbuotojo numeris: " << darbuotojai[rado].numeris << endl;
    cout << "Darbuotojo atlyginimas: " << darbuotojai[rado].atlyginimas << endl;
    cout << "Darbuotojo telefono numeris: " << darbuotojai[rado].tel_numeris << endl;
    cout << "Darbuotojo skyriaus numeris: " << darbuotojai[rado].skyriaus_numeris << endl;
    cout << "|===========================================|" << endl;
    
    return 0;
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