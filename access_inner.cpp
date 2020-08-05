
#include <iostream>


class Outer {

private:
    class Inner {
        private:
            int _num;
        public:
            Inner(int num) : _num(num) {}

            int getNum() { return _num; }
    };

    Inner* inner;

public:
    Outer(int num) : inner(new Inner(num)) {}

    int getNum() { return inner->getNum(); }

};


int main(int ac, char ** av)
{
    Outer outer(10);

    std::cout << "The number is: " << outer.getNum() << std::endl; 

    return 0;
}
