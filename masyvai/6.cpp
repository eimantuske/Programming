#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    char alphabet[27];
    char letter;
    int index;

    for(letter = 'A'; letter <= 'Z'; letter++, index++)
        alphabet[index] = letter;
        alphabet[index] = NULL;
       for(index = 0; alphabet[index] != NULL; index++)
        cout <<"Raides: "<<alphabet[index];
        cout << endl;
        system("pause");
        return 0;
    }
