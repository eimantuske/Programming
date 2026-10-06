// #include <iostream>
// #include <queue>
// #include <iomanip>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main() {
//     srand(time(0));
//     queue<int> eile;
//     int bilietoNumeris = 1;
    
//     int laukianciuSkaicius = 5; 
//     for (int i = 0; i < laukianciuSkaicius; i++) {
//         eile.push(bilietoNumeris);
//         bilietoNumeris++;
//     }

//     int veiksmas;
//     cout << "1. Gauti bilieta\n";
//     cout << "Pasirinkite veiksma: ";
//     cin >> veiksmas;

//     if (veiksmas == 1) {
//         eile.push(bilietoNumeris);
        
//         cout << "\nJusu bilieto numeris: " << setfill('0') << setw(3) << bilietoNumeris << "\n";
//         cout << "Esate " << eile.size() << " eileje.\n\n";

//         cout << "Visi eileje esantys bilietai:\n";
        
//         queue<int> laikinaEile = eile; 
//         while (!laikinaEile.empty()) {
//             cout << "- " << setfill('0') << setw(3) << laikinaEile.front() << "\n";
//             laikinaEile.pop();
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <stack>

int main() {
    std::stack<int> stekas;

    std::cout << "Pradinis stekas: tuscias\n";

    int skaiciai[] = {10, 25, 7, 18, 30};

    for (int sk : skaiciai) {
        stekas.push(sk);
        std::cout << "Idedame: " << sk << " | virsutinis elementas: " << stekas.top() << std::endl;
    }

    std::cout << "\nPašaliname 3 elementus:\n";
    for (int i = 0; i < 3; ++i) {
        if (!stekas.empty()) {
            stekas.pop();
            if (!stekas.empty()) {
                std::cout << "Po pasalinimo: " << stekas.top() << std::endl;
            } else {
                std::cout << "Po pasalinimo: stekas tuscias\n";
            }
        }
    }

    std::cout << "\nLikusieji steko elementai: ";
    if (stekas.empty()) {
        std::cout << "stektas tuscias" << std::endl;
    } else {
        std::stack<int> laikinas = stekas;
        while (!laikinas.empty()) {
            std::cout << laikinas.top() << " ";
            laikinas.pop();
        }
        std::cout << std::endl;
    }

    return 0;
}
