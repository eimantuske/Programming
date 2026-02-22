#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    cout<<"enter integer: ";
    cin >> num;
    int *p_darr= new int[num];
    for(int i = 0; i < num; i++){
    p_darr[i]=i;
    cout <<"value of : "<< i<<endl;
    cout<<"Element is : "<<p_darr[i]<<endl;
    }
    delete[] p_darr;


return 0;
}