#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

int main()
{
    char title[] = "Mokinames programuoti";
    char lession[] = "Simbolines eilutes";

    cout<< "Diziosomis raidemis: " << strupr(title) << endl;
    cout<< "Mazosiomis raidemis: " << strlwr(lession) << endl;
    

    return 0;
}

