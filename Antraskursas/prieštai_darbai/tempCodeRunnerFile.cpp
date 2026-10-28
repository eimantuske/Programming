#include <iostream>
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