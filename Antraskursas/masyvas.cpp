#include <iostream>

using namespace std;

int main(){
    int n = 9;
    int a[9] = {1,2,6,4,5,6,7,8,39};

    for(int i = 0; i < n-1; i++){ //biurbulo rusiavimas
        for(int j= 0; j <n-1; j++){
            
            if(a[j]>a[j+1]){  // lyginam viena su kitu skaiciu
                int temp = a[j]; // rade didisesni imam i atminti 
                a[j]= a[j + 1]; 
                a[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i]<< " ";
    }
    return 0;
}