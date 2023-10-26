#include <iostream>
#define PRINT_OK


int main() {
	#ifdef PRINT_OK
	std::cout << "OK\n";
	#endif

	#ifndef PRINT_NO
	std::cout << "no\n";
	#endif
}