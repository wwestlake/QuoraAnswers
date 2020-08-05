#include <iostream>
int main(int ac, char ** av)
{
	int a = 42;  	// a contains 42			
	int* b = &a;	// b is a pointer to a

	// a outputs 42, dereferenced b outputs the same 42.
	std::cout << a << " " << *b << std::endl;

	a = 43;

	// here *b is now 43 because it pointed to a
	std::cout << *b << std::endl;
	return 0;
}

