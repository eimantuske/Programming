#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int  A[10];
    
    for(int i = 0; i < 4; i++){
        A[i] = i + 1;
        cout<< A[i] <<endl;
        
    }
    cout << "-----------------" << endl;
    for(int i = 3; i >= 0; i--){
        cout << A[i] << endl;
    }
    return 0;
}