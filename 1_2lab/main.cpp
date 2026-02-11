#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){

    int a, b;
    double aa, bb, cc, dd;
    string d, t;
    do{
        cout << "===================================" <<endl;
            cout << endl;
                cout <<"Iveskite skaiciu : ";
                    cin >> a;
                        cout << endl;

        cout << "===================================" <<endl;
            cout << endl;
            cout <<"iveskite simboli (* / + -) : ";
                cin >> d;
                cout << endl;
        cout << "===================================" <<endl;
            cout << endl;
                cout <<"iveskite skaiciu : ";
                    cin >> b;
                        cout << endl;
                            cout << "===================================" <<endl;

        if(d == "*"){
        aa = a * b;
            cout <<"Atsakymas: " << a << " " << "= " << aa << endl;
            }
            else if(d == "/"){
            bb = a / b;
            cout <<"Atsakymas: " << (double)bb << endl;
            }
            else if(d == "+"){
            cc = a + b;
            cout <<"Atsakymas: " << cc << endl; 
            }
            else if(d == "-"){
            dd = a - b;
            cout <<"Atsakymas: " << dd << endl;
            }
            else
             cout <<"Neteisingas simbolis"<<endl;
                 
       cout << "===================================" <<endl;
       cout << endl;
       cout << "Naujas skaiciavimas? (y/n): "<<endl;
       cout << endl;
       cout << "===================================" <<endl;
       cin  >> t;
    }
    while(t == "y" || t == "Y");
        return 0;
}