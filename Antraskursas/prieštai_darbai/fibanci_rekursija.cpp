#include <iostream>

using namespace std;

int fibanaci(int n) {
    
    if (n <= 1) {
        return n;
    }
    return fibanaci(n - 1) + fibanaci(n - 2);
}

int main() { 
    int n = 18; // Kiek narių atspausdinti
    
    cout << "Fibonačio seka: ";
    
   
    for (int i = 0; i < n; i++) {
        cout << fibanaci(i) << " "; 
    }
    
    cout << endl;
    return 0;
}