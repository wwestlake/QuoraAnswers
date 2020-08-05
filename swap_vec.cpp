#include <iostream>
#include <vector>

int main(int ac, char ** av)
{
	std::vector<int> vec {1,2,3,4,5};
	
	for (int i :  vec)
	{
		std::cout << i << " ";

	}
	std::cout << std::endl;

	int temp = vec[2];
	vec[2] = vec[3];
	vec[3] = temp;

	for (auto i : vec)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;

	return 0;
}
