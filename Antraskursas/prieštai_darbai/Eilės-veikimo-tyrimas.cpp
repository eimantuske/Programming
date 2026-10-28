/*
KLAUSIMAI IR ATSAKYMAI:

1. Kodėl pirmas aptarnaujamas Jonas?
Nes jis į eilę atėjo pats pirmas. Eilė veikia FIFO principu.

2. Kodėl paskutinis į eilę atėjęs klientas nėra aptarnaujamas pirmas?
Nes nauji elementai visada stoja į eilės galą ir turi laukti, kol bus aptarnauti visi, atėję prieš juos.

3. Kuo šis principas skiriasi nuo steko?
Eilė  naudoja FIFO . 
Stekas naudoja LIFO .

4. Kuri operacija parodo pirmą eilės elementą?
Komanda front().

5. Kuri operacija pašalina pirmą eilės elementą?
Komanda pop().
*/
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> eile;
    string vardas;
    double n;

    cout <<"Iveskite kiek bus klientu: ";
    cin >> n;

    for(int i = 0; i < n; i++){ 
       cout << i + 1 << " kliento vardas: ";
       cin >> vardas;
       eile.push(vardas);
    }



    while (!eile.empty()) {

        cout << "Aptarnaujamas: " << eile.front() << "\n";

        eile.pop();


        if (!eile.empty()) {
            cout << "Dabar pirmas: " << eile.front() << "\n\n";
        }
    }

    return 0;
}