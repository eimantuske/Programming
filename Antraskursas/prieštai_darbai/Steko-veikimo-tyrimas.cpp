// KLAUSIMŲ ATSAKYMAI:
// 1. Kuris elementas pašalinamas pirmas?
//    Pirmas pašalinamas paskutinis įdėtas elementas šiuo atveju 30. Stekas veikia LIFO Last In, First Out principu.

// 2. Kodėl negalima tiesiogiai pasiekti, pavyzdžiui, trečio steko elemento?
//    Stekas yra abstrakčioji duomenų struktūra, kuri neleidžia indeksavimo. Prieiga galima tik prie paties viršutinio elemento. Norint pasiekti gilesnius elementus, būtina pašalinti viršuje esančius.

// 3. Kokia yra push() operacijos paskirtis?
//    Įdeda naują elementą į steko viršų.

// 4. Kokia yra pop() operacijos paskirtis?
//    Pašalina elementą, esantį steko viršuje. (Pastaba: ši operacija reikšmės negrąžina, tik pašalina).

// 5. Kokia yra top() operacijos paskirtis?
//    Grąžina steko viršuje esančio elemento reikšmę jo nepašalinant.

#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    stack<int> stekas;
    int skaiciai[] = {10, 25, 7, 18, 30};

    int sk;
cout << "Įveskite 5 skaičius:\n";
for (int i = 0; i < 5; ++i) {
    cin >> sk; 
    stekas.push(sk);
    cout << "Įdėta: " << sk << ", steko viršuje: " << stekas.top() << '\n';
}

    cout << "\n Elementų šalinimas\n";
    cout << "Kiek elementų ištrinti? ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        if (!stekas.empty()) {
            stekas.pop();
            cout << "Elementas pašalintas. ";
            if (!stekas.empty()) {
                cout << "Naujas viršuje: " << stekas.top() << '\n';
            } else {
                cout << "Stekas tuščias.\n";
            }
        } else {
            cout << "Klaida: Stekas tuščias, negalima pašalinti.\n";
        }
    }

    cout << "\n--- Likę elementai ---\n";
    while (!stekas.empty()) {
        cout << stekas.top() << " ";
        stekas.pop();
    }
    cout << '\n';

    return 0;
}