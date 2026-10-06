/*
KLAUSIMŲ ATSAKYMAI:
1. Kodėl push galima realizuoti naudojant push_back?
   Vektoriaus pabaiga naudojama kaip steko viršūnė. push_back prideda elementą į vektoriaus pabaigą, kas atitinka steko push operaciją.

2. Kodėl pop galima realizuoti naudojant pop_back?
   pop_back pašalina elementą iš vektoriaus pabaigos, t. y. pašalina viršutinį steko elementą.

3. Koks yra šių operacijų sudėtingumas?
   Amortizuotas O(1) (konstantinis laikas). Pridėjimas ir šalinimas iš vektoriaus galo nereikalauja kitų elementų perstūmimo.

4. Kodėl ši realizacija atitinka LIFO principą?
   Veiksmai (pridėjimas ir šalinimas) atliekami tik viename gale (vektoriaus pabaigoje). Paskutinis pridėtas elementas pašalinamas pats pirmas.
   
   */

#include <iostream>
#include <vector>
  
using namespace std;

void push(vector<int>& st, int x) {
    st.push_back(x);
}

void pop(vector<int>& st) {
    if (!st.empty()) {
        st.pop_back();
    } else {
        cout << "Stekas tuščias, negalima pašalinti.\n";
    }
}

int top(vector<int>& st) {
    if (!st.empty()) {
        return st.back();
    }
    return -1; // Klaidos kodas
}

bool empty(vector<int>& st) {
    return st.empty();
}

int main() {
    vector<int> stekas;
    int pasirinkimas, skaicius;

    while (true) {
        cout << "\n--------------------------------";
        cout << "\n1 - Įdėti elementą\n";
        cout << "2 - Pašalinti elementą\n";
        cout << "3 - Parodyti viršutinį elementą\n";
        cout << "4 - Patikrinti, ar stekas tuščias\n";
        cout << "5 - Baigti programą\n";
        cout << "Pasirinkite veiksmą: ";
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1:
                cout << "Įveskite skaičių: ";
                cin >> skaicius;
                push(stekas, skaicius);
                break;
            case 2:
                pop(stekas);
                if (!empty(stekas)) {
                    cout << "Steko viršus: " << top(stekas) << '\n';
                }
                break;
            case 3:
                if (!empty(stekas)) {
                    cout << "Steko viršus: " << top(stekas) << '\n';
                } else {
                    cout << "Stekas tuščias.\n";
                }
                break;
            case 4:
                if (empty(stekas)) {
                    cout << "Taip, stekas tuščias.\n";
                } else {
                    cout << "Ne, stekas nėra tuščias.\n";
                }
                break;
            case 5:
                return 0;
            default:
                cout << "Neteisingas pasirinkimas. Bandykite dar kartą.\n";
        }
    }
}
