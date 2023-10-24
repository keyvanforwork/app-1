#include <iostream>
using namespace std;

double  numberInput() {
	cout << "Enter a number ";
	double input{ };
	cin >> input;
	return input;
}

int main() {
	cout << "Double number is equal to: " << numberInput() * 2 << "\n";
	return 0;
}