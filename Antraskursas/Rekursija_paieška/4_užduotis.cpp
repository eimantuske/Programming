#include <iostream>
#include <algorithm>

using namespace std;

int arraySum(const int arr[], int size) {
    if (size <= 0) {
        return 0;
    }
    return arr[size - 1] + arraySum(arr, size - 1);
}

int arrayMax(const int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }
    return max(arr[size - 1], arrayMax(arr, size - 1));
}

bool arrayContains(const int arr[], int size, int target) {
    if (size <= 0) {
        return false;
    }
    if (arr[size - 1] == target) {
        return true;
    }
    return arrayContains(arr, size - 1, target);
}

int main() {
    int arr[] = {4, 7, 2, 9, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Masyvas: {4, 7, 2, 9, 1, 6}" << endl;
    cout << "1. Masyvo suma: " << arraySum(arr, size) << endl;
    cout << "2. Didziausias elementas: " << arrayMax(arr, size) << endl;

    int target;
    cout << "3. Iveskite skaiciu paieskai: ";
    cin >> target;

    if (arrayContains(arr, size, target)) {
        cout << "Skaicius " << target << " yra masyve." << endl;
    } else {
        cout << "Skaicius " << target << " masyve nerastas." << endl;
    }

    return 0;
}