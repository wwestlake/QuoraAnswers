
#include <iostream>

void print(int a)
{
    if (a == 0) {
        std::cout << "zero" << std::endl;
        return;
    }

    std::cout << a << std::endl;
}

int add(int a, int b)
{
    return a + b;
}


int main(void)
{
    int result = add(-3, 3);
    print(result);

    result = add(4,5);
    print(result);

    return 0;
}
