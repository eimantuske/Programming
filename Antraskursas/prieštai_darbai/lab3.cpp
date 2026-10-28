#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Iveskite pazymiu kieki n: ";
    cin >> n;

    vector<int> pazymiai;
    cout << "Iveskite " << n << " pazymius:\n";
    for (int i = 0; i < n; ++i) {
        int pazymys;
        cin >> pazymys;
        pazymiai.push_back(pazymys);
    }

    if (pazymiai.empty()) {
        cout << "Nera ivestu pazymiu.\n";
        return 0;
    }

    // Išvesti visus pažymius
    cout << "Visi pazymiai: ";
    for (int p : pazymiai) {
        cout << p << " ";
    }
    cout << "\n";

    // Apskaičiuoti pažymių vidurkį
    double suma = accumulate(pazymiai.begin(), pazymiai.end(), 0.0);
    double vidurkis = suma / pazymiai.size();
    cout << "Vidurkis: " << vidurkis << "\n";

    // Rasti didžiausią pažymį
    int max_p = *max_element(pazymiai.begin(), pazymiai.end());
    cout << "Didziausias pazymys: " << max_p << "\n";

    // Rasti mažiausią pažymį
    int min_p = *min_element(pazymiai.begin(), pazymiai.end());
    cout << "Maziausias pazymys: " << min_p << "\n";

    // Suskaičiuoti, kiek yra pažymių 10
    int desimtuku_kiekis = count(pazymiai.begin(), pazymiai.end(), 10);
    cout << "Desimtuku kiekis: " << desimtuku_kiekis << "\n";

    // Rasti vartotojo nurodyto pažymio poziciją
    int ieskomas;
    cout << "Iveskite pazymi, kurio pozicijos ieskote: ";
    cin >> ieskomas;
    
    auto it = find(pazymiai.begin(), pazymiai.end(), ieskomas);
    if (it != pazymiai.end()) {
        int pozicija = distance(pazymiai.begin(), it);
        cout << "Pazymio " << ieskomas << " pozicija (indeksas): " << pozicija << "\n";
    } else {
        cout << "Tokio pazymio nera.\n";
    }

    // Leisti pridėti naują pažymį
    int naujas;
    cout << "Iveskite nauja pazymi pridejimui: ";
    cin >> naujas;
    pazymiai.push_back(naujas);
    cout << "Pazymys pridetas. Bendras kiekis dabar: " << pazymiai.size() << "\n";

    // Leisti pašalinti paskutinį pažymį
    if (!pazymiai.empty()) {
        pazymiai.pop_back();
        cout << "Paskutinis pazymys pasalintas. Bendras kiekis dabar: " << pazymiai.size() << "\n";
    }

    return 0;
}