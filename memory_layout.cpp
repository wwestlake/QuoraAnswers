#include <iostream>
#include <iomanip>

class SimpleClass {
public:
    unsigned int a=0xAAAAAAAA;
    virtual void Method1() {};
    unsigned int b=0xBBBBBBBB;
};


int main(int ac, char ** av)
{
    SimpleClass simple;
    uint32_t* simple_ptr = (uint32_t*)&simple;

    std::cout << std::hex << simple_ptr << "   ";
    for (int i = 0; i < 4; i++)
    {
        std::cout << std::hex <<  std::setw(8) << std::setfill('0') << *(simple_ptr++) << " ";
    }
    std::cout << std::endl;



    return 0;
}
