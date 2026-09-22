#include <iostream>
using namespace std;

int main() { 
    int n = 18; // kiek kartu atspausdinti
    int F1 = 0, F2 = 1, kitas;// kitas tai sekantis skaicius
    cout << "Fibonačio seka: ";
    for (int i = 0; i < n; i++) {
        cout << F1 << " "; // atspausdinam pirmąjį skaičių
        kitas = F1 + F2; // randam sekantį skaičių
        F1 = F2; // pirmasis skaičius tampa antruojuoju
        F2 = kitas; // antrasis skaičius tampa sekant  

     return 0;   
}   