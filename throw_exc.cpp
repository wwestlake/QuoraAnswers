#include <iostream>


int function_that_throws_exception() 
{
    throw std::exception();
}


int main(void)
{
    try {
        function_that_throws_exception();
    } catch (std::exception ex) {
        std::cout << "Caught exception: " << ex.what() << std::endl;
    }
 
    return 0;
}