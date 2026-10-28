#include <iostream>

using namespace std;

int binarysearch (const int a[], int n, int target);

int main() {
    int n = 8;
    int a[] = {10,20,30,10,50,60,80,70}; 
    int target = 70; 
    binarysearch(a, n, target);
    int result = binarysearch(a, n, target);
    cout << result << endl;
    

    return 0;

}

int binarysearch (const int a[], int n, int target) {
    int left = 0;
    int right = n-1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == target) {
            return mid; 
        } else if (a[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }
    return -1; 
}