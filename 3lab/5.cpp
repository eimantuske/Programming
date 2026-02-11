#include <iostream>
#include <cmath>

using namespace std;
double suma(double a, double b);

int main(){
    double a, b, c;
    cout << "Įveskite pirmąjį skaičių: ";
    cin >> a;
    cout << "Įveskite antrąjį skaičių: ";
    cin >> b;

    c = (double)suma(a, b);

    cout << "Skaičių suma yra: " << c << endl;

    return 0;
}
double suma(double a, double b){

    return (a + b);
}