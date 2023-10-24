#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Tell me your name: \n" << " and your age is: ";
	string name{ };
	int age{ };
	cin >> name >> age;
	cout << name << " is " << age << " years old" << "\n";
	cout << "Good";
	return 0;
}

