#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int value[5];
    value[0] = 100;
    value[1] = 200;
    value[2] = 300;
    value[3] = 400;
    value[4] = 500;

    for(int i = 0; i < 5; i++){
        cout << "Elementai: " << value[i] << endl;
    }
    

    return 0;
}