
#include <iostream>
#include <string>

class SomeClass {
private:
	std::string _msg;
public:

	SomeClass(std::string msg) : _msg(msg) {}
			
	std::string getMessage() { return _msg; }

};


template <typename T>
T* FactoryFunction(std::string message)
{
	return new T(message);
}


int main(int ac, char ** av)
{
	SomeClass* ptr = FactoryFunction<SomeClass>("this is a message");

	std::cout << ptr->getMessage() << std::endl;

	return 0;
}
