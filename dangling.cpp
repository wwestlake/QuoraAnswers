

#include <iostream>
#include <string>

class test {
    std::string _value;
    public:
        test(std::string value) : _value(value) {}

        void print()
        {
            std::cout << _value << std::endl;
        }
};

int main(int ac, char ** av)
{
    // create a point
    test * t = new test("this is a test");
    // delete the pointer
    delete t;

    // try to use the pointer:

    t->print();

    return 0;
}

