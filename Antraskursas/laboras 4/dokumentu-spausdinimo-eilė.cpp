#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Document {
    string name;
    int pages;
};

int paskaiciuotiPuslapius(queue<Document> q) {
    int suma = 0;
    while (!q.empty()) {
        suma += q.front().pages;
        q.pop();
    }
    return suma;
}

int main() {
    queue<Document> spausdinimoEile;
    int pasirinkimas;

    do {
        cout << "\n--- Spausdintuvo valdymas ---\n";
        cout << "1. Prideti dokumenta i eile\n";
        cout << "2. Parodyti pirma dokumenta\n";
        cout << "3. Atspausdinti pirma dokumenta\n";
        cout << "4. Parodyti likusiu dokumentu ir puslapiu skaiciu\n";
        cout << "0. Iseiti\n";
        cout << "Jusu pasirinkimas: ";
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1: {
                Document naujasDokumentas;
                cout << "Iveskite dokumento pavadinima: ";
                cin.ignore();
                getline(cin, naujasDokumentas.name);
                cout << "Iveskite puslapiu skaiciu: ";
                cin >> naujasDokumentas.pages;
                
                spausdinimoEile.push(naujasDokumentas);
                break;
            }
            case 2:
                if (!spausdinimoEile.empty()) {
                    cout << "Pirmas eileje: " << spausdinimoEile.front().name 
                         << " (" << spausdinimoEile.front().pages << " psl.)\n";
                } else {
                    cout << "Spausdinimo eile tuscia.\n";
                }
                break;
            case 3:
                if (!spausdinimoEile.empty()) {
                    cout << "Spausdinamas dokumentas '" << spausdinimoEile.front().name << "'...\n";
                    spausdinimoEile.pop();
                } else {
                    cout << "Nera ka spausdinti, eile tuscia.\n";
                }
                break;
            case 4: {
                cout << "Laukia " << spausdinimoEile.size() << " dokumentai(-u).\n";
                cout << "Is viso liko spausdinti: " << paskaiciuotiPuslapius(spausdinimoEile) << " puslapius(-iu).\n";
                break;
            }
            case 0:
                break;
            default:
                cout << "Neteisingas pasirinkimas. Bandykite dar karta.\n";
        }
    } while (pasirinkimas != 0);

    return 0;
}
