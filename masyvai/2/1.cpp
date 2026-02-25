#include <iostream>
using namespace std;

int main() {
    char lentele[3][3];
    
    cout << "Įveskite 3x3 lentelę (9 simboliai):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> lentele[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << lentele[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}