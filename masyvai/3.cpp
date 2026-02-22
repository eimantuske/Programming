#include <iostream>
#include <cmath>
using namespace std;

int get_values(int A[]);

int main() {
    int  A[10];
    cout << "Įveskite 10 sveikų skaičių: " << endl;
    for(int i = 0; i < 10; i++){

        cin >> A[i];

    }
    cout << "Įvesti skaičiai: " << endl;

    get_values(A);
    
    return 0;
}
int get_values(int A[]){
    for  (int i = 0; i < 10; i++){
        cout << A[i] << endl;

    }
}
