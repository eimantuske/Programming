#include <iostream>
#include <cmath>

using namespace std;
int fib(int n);

int main(){
    int n, b;
    cout << "Įveskite kiek norite Fibonači skaiciu: ";
    cin >> n;

    cout << "Fibonači skaičiai: "<<endl;
    for(int i = 0; i < n; i++){
        b= fib(i);
        cout << b << " ";
    }

    return 0;
}
int fib(int n){
    int a1 = 0;
    int b1 = 1;
    int suma = 0;

    if(n <= 1){
        return n;
    }
    else{
        for(int i = 2; i < n; i++){

            suma = a1 + b1;
            a1 = b1;
            b1 = suma;
        }
        return b1;
    }
}