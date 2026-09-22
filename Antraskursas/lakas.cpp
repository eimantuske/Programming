#include <chrono>
#include <iostream>
#include <vector>
using namespace std;
using namespace std::chrono;
int main() {
    int n = 1000000000;

auto start = high_resolution_clock::now();
    
int x = n;
int count = 0; 

while (x > 1) {
    x /= 2;
}


auto finish = high_resolution_clock::now();
auto elapsed = duration_cast<microseconds>(finish - start);

long long work = (long long)n * n;

cout << "n = " << n 
         << " | Ciklas ivykdytas: " << count << " kartus"
         << " | Laikas: " << elapsed.count() << " mikrosekundziu" << endl;
return 0;
}
