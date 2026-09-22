#include <iostream>

using namespace std;

int fibonacci(int length, int current_length, int nr1, int nr2) {
	if (current_length < length-2){
		if (current_length < 1){
			cout << current_length + 1  << ") " << nr1 << endl;
			cout << current_length + 2 << ") " << nr2 << endl;
		}

		int nr3 = nr1 + nr2;
		nr1 = nr2;
		nr2 = nr3;
		current_length = current_length + 1;
		cout << current_length + 2 << ") " << nr2 << endl;
		return fibonacci(length, current_length, nr1, nr2);
	}
	else return 0;
  }
  
int find_fibonacci(int length, int nr1, int nr2, int i) {
	if (length != i + 2){
		i++;
		//cout << i <<") nr1: " << nr1<< "; nr2: " << nr2 << endl;;
		int nr3 = nr1 + nr2;
		nr1 = nr2;
		nr2 = nr3;
		return find_fibonacci(length, nr1, nr2, i);
	}
	else return nr2;
  }

int main() {
    int length = 0;
    while (length < 3){
        cout << "length: " << endl;	
        cin >> length;
	}
    int number[length];
    number[0] = 0;
    number[1] = 1;

	cout << "################### 1 ###################" << endl;
	cout << "1) " << number[0] << endl;
	cout << "2) " << number[1] << endl;
    for (int i = 2; i < length; i++){
    	number[i] = number[i-1] + number[i-2];
    	cout << i + 1 << ") " << number[i] << endl;
	}
	
	cout << "################### 2 ###################" << endl;
	//cout << "fibonacci: length:" << length <<"; current_length: " << 0 << "; number[0] = " << number[0] << "; number[0] = " << number[1] << endl;
	cout << fibonacci(length, 0, number[0], number[1]) << endl;
    number[length] = 0;
    
    cout << "################### 3 ###################" << endl;
    cout << "fibonacci number: "<< endl;
    cin >> length;
    cout << find_fibonacci(length, 0, 1, 0);

    return 0;
}