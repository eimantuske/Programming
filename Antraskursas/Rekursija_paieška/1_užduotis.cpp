#include <iostream>

using namespace std;

void printNumbers (int n) {
    if (n <= 0) {
        return;
    }
    printNumbers(n - 1);
    cout << n << " ";
}

int main() {
    int n;
    cout << "Iveskite skaiciu: ";
    cin >> n;

    cout << "Skaiciai nuo 1 iki " << n << ": ";
    printNumbers(n);
    cout << endl;

    return 0;
}