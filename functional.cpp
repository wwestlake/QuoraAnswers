
#include <iostream>
#include <functional>

// a curried function in C++
auto add3numbers = [](int x) {
    return [x](int y)  {
        return [x,y](int z)  {
            return x + y + z;
        };
    };
};




int main(int ac, char ** av)
{
    // partial application in C++
    auto add2numbersTo10 = add3numbers(10);
    auto add1NumberTo22 = add2numbersTo10(12);

    std::cout << add1NumberTo22(5) << std::endl;

    auto a = add3numbers(1)(2)(3);
    std::cout << a << std::endl;



    return 0;
}


