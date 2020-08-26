
#include <iostream>
#include <string>

class CopyMe {
    std::string _message;
    public:
        CopyMe(std::string message) : _message(message) {}

        // copy constructor
        CopyMe(const CopyMe& instance) : _message(instance._message) {}

        void print()
        {
            std::cout << _message << std::endl;
        }
};


int main(int ac, char** av)
{
    CopyMe me("Some Message");
    me.print();

    CopyMe other = me;

    // other is now a copy of me
    other.print();

    return 0;
}

