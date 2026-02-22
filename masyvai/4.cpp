#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int A[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Įveskite elementą [" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

return 0;
}