#include <iostream>
#include <vector>

int main(int ac, char ** av)
{
	std::vector<int> data {1,2,3,4,5};
	// the modern way
	for (auto a : data)
	{
		std::cout << a << std::endl;
	}

	// the old way
	for (auto iter = data.begin(); iter != data.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
	return 0;
}

