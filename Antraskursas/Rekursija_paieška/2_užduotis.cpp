#include <iostream>

using namespace std;

int sum(int n) {

    if (n <= 1) {
        return n;
    }

    return n + sum(n - 1);
}

int main() {
    int n;
    cout << "Iveskite skaiciu: ";
    cin >> n;

    if (n < 1) {
        cout << "Prasome ivesti teigiama skaiciu (n >= 1)." << endl;
        return 1;
    }

    cout << "Suma nuo 1 iki " << n << " yra: " << sum(n) << endl;

    return 0;
}