#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

void paieska(int a[], int n);
int pasalintiElementa(int a[], int& n, int pozicija);
int iterptiElementa(int a[], int& n, int talpa, int pozicija, int reiksme);


int main(){
    int n = 10;
    srand(time(0)); 
    
    int a[10];
    vector<int> b(10);

    double vidurkis;
    int suma = 0;
    
    for(int i = 0; i < n; i++){
        a[i] = rand() % 100;
        b[i] = rand() % 100;
    }

    cout <<"isvedimas masyvu: "<<endl<< "masyvas : ";
    for(int i = 0; i < n; i++){ 
        cout << a[i] << " ";
    }
    cout <<endl << "vektorius : ";
    for(int i = 0; i < n; i++){ 
        cout << a[i] << " ";
    }

    paieska(a, n);

    for(int i = 0; i < n-1; i++){ 
        for(int j= 0; j < n-1; j++){
            if(a[j] > a[j+1]){  
                int temp = a[j]; 
                a[j] = a[j + 1]; 
                a[j+1] = temp;
            }
        }
    }
    cout << endl << "nuo maziausio iki didziausio: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    for(int i = 0; i < n-1; i++){ 
        for(int j= 0; j < n-1; j++){
            if(a[j] < a[j+1]){  
                int temp = a[j]; 
                a[j] = a[j + 1]; 
                a[j+1] = temp;
            }
        }
    }
    cout << endl << "nuo didziausio iki maziausio: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    for (int i = 0; i < 10; i++) { 
        suma += a[i];
    }

    vidurkis = (double)suma / 10;

    cout << endl << "Suma: " << suma << endl;
    cout << "Vidurkis: " << vidurkis << endl;
    cout << "______________________________________"<<endl;
    
    cout <<"pirmas vektorius : "<< b.front()<<endl;
    cout << "paskutinis vektorius :" << b.back() <<endl;
  






    return 0;
}

void paieska(int a[], int n) {
    int ieskoma_reiksme;
    int kartai = 0;

    cout << endl << "Iveskite ieskoma reiksme: ";
    cin >> ieskoma_reiksme;

    for(int i = 0; i < n; i++) {
        if(a[i] == ieskoma_reiksme) {
            cout << "Reiksme rasta indekse: " << i << endl;
            kartai++;
        }
    }

    if(kartai == 0) {
        cout << "Tokios reiksmes masyve nera." << endl;
    } else {
        cout << "Reiksme pasikartoja " << kartai << " kartus." << endl;
    }
}
int iterptiElementa(int a[], int& n, int talpa, int pozicija, int reiksme) {
    if (n >= talpa || pozicija < 0 || pozicija > n) return -1;
    
    int poslinkiai = 0;
    for (int i = n; i > pozicija; i--) {
        a[i] = a[i - 1]; // Slenkame elementus į dešinę
        poslinkiai++;
    }
    a[pozicija] = reiksme;
    n++;
    return poslinkiai;
}

int pasalintiElementa(int a[], int& n, int pozicija) {
    if (n <= 0 || pozicija < 0 || pozicija >= n) return -1;

    int poslinkiai = 0;
    for (int i = pozicija; i < n - 1; i++) {
        a[i] = a[i + 1]; // Slenkame elementus į kairę
        poslinkiai++;
    }
    n--;
    return poslinkiai;
}