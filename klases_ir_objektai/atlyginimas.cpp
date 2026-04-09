#include <iostream>
#include <string>

using namespace std;

class employee {
    protected:
        int atlyginimas;
};

class programuotojas : public employee {
    public:
        void setAtlyginimas(int a) {
            atlyginimas = a;
        }
        int getAtlyginimas() {
            return atlyginimas;
        }
};

int main() {
    programuotojas p1;
    p1.setAtlyginimas(3000);
    cout << "Programuotojo atlyginimas: " << p1.getAtlyginimas() << " EUR" << endl;

    return 0;
}