#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> q;
    int pasirinkimas = 0;
    int klientoNr = 1; 

    while (pasirinkimas != 5) {
        cout << "\n1 - Pridėti klientą\n"
             << "2 - Aptarnauti klientą\n"
             << "3 - Parodyti pirmą klientą\n"
             << "4 - Parodyti klientų skaičių\n"
             << "5 - Baigti\n\n"
             << "Pasirinkite: ";
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1: {
                
                cout << "Kliento vardas: ";
                string vardas;
                cin >> vardas;
                
                string irasas = vardas + " (Klientas Nr. " + to_string(klientoNr) + ")";
                q.push(irasas);
                klientoNr++;
                break;
            }
            case 2:
                if (!q.empty()) {
                    cout << "\nAptarnautas klientas: " << q.front() << "\n";
                    q.pop();
                } else {
                    cout << "\nKlaida: Eilė tuščia!\n";
                }
                break;
            case 3:
                if (!q.empty()) {
                    cout << "\nPirmas klientas: " << q.front() << "\n";
                } else {
                    cout << "\nEilė tuščia!\n";
                }
                break;
            case 4:
                cout << "\nKlientų skaičius: " << q.size() << "\n";
                break;
            case 5:
                break; 
                cout << "\nKlaida: Neteisingas pasirinkimas!\n";
                break;
        }
    }

    return 0;
}