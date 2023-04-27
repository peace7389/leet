
#include <iostream>
using namespace std;


int sum(int &a) {

	a = a + 1;
	cout << "a=" << a << endl;
	return a;
		
}


int main() {
	int number = 1;
	int & refNumber = number;

	cout << &number << endl;
	cout << &refNumber << endl;

	cout << sum(number) << endl;
	cout << sum(refNumber) << endl;

	return 0;
}

