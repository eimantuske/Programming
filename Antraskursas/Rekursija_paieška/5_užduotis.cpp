#include <iostream>

using namespace std;

int countEven(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    
    int isEven = (arr[n - 1] % 2 == 0) ? 1 : 0;
    return isEven + countEven(arr, n - 1);
}

int main() {
    int arr[] = {2, 5, 8, 11, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Lyginiu skaiciu kiekis: " << countEven(arr, n) << endl;

    return 0;
}