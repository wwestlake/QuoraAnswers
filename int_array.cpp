
#include <iostream>

int main(int ac, char ** av)
{
    int myArray[10];
    for (int i = 0; i < 10; i++)
    {
        myArray[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << myArray[i] << std::endl;
    }


    return 0;
}
