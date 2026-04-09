#include <iostream>
#include <string>

using namespace std;

class gyvunas {
    public:
        void gyuno_garas() {
            cout << "Gyvuno garas" << endl; 
        }
};

class katinas : public gyvunas {
    public:
        void garsas() {
            cout << "Miau miau!" << endl;
        }
};

class sobaka : public gyvunas {
    public:
        void garsas() {
            cout << "Au au!" << endl;
        }
};

int main() {
    gyvunas animal;
    katinas cat;
    sobaka dog;

    animal.gyuno_garas();
    cat.gyuno_garas();
    cat.garsas();
    dog.gyuno_garas();
    dog.garsas();
}