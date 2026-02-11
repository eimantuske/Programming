#include <iostream>
#include <cmath>

using namespace std;
string vard();

int main() {
    string b;
    b = vard();
    cout << "Sveiki, " << b << "!" << endl;
    return 0;
}
string vard(){
    cout << "Įveskite savo vardą: ";
    string a;
    cin >> a;

    return a;
}