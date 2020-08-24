
#include <iostream>


template <typename T>
T func1(T val1, T val2)
{
    return val1 + val2;
}

auto func2(auto val1, auto val2)
{
    return val1 + val2;
}

int main(int ac, char ** av)
{
    std::cout << func1(1,2) << std::endl;
    std::cout << func2(1,2) << std::endl;

    std::cout << func1(3.5,7.2) << std::endl;
    std::cout << func2(6.8,9.1) << std::endl;


    return 0;
}
