#include <iostream>
#include <functional>
#include <sstream>

class A {
    int _value;
public:
    A(int value) : _value(value) {}

    void print()
    {
        std::cout << _value << std::endl;
    }
};

class B {
    float _value;
public:
    B(float value) : _value(value) {}

    void print()
    {
        std::cout << _value << std::endl;
    }
};

class C {
    bool _value;
public:
    C(bool value) : _value(value) {}

    void print()
    {
        std::cout << (_value ? "true" : "false") << std::endl;
    }
};

template <typename T>
class D {
    T _value;
public:
    D(T value) : _value(value) {}

    void print()
    {
        std::cout << _value << std::endl;
    }    
};

template <>
class D<bool>
{
    bool _value;
public:
    D(bool value) : _value(value) {}
    void print()
    {
        std::cout << (_value ? "true" : "false") << std::endl;
    }
};

template <typename T>
class E {
    T _value;
public:
    E(T value) : _value(value) {}

    void print(std::function<std::string(T)> format)
    {
        std::cout << format(_value) << std::endl;
    }    
};

struct person {
    std::string name;
    int age;
};


int main(void)
{
    //D<int> a(10);
    //D<float> b(20.0f);
    //D<bool> c(false);
//
    //a.print();
    //b.print();
    //c.print();
    
    E<bool> e(true);
    e.print([](bool v) -> std::string{ return v ? "true" : "false"; });

    E<person> f( { "Bill", 59 });
    f.print([](person v) -> std::string{ 
        std::stringstream ss;
        ss << v.name << " is " << v.age << " years old";
        return ss.str();
    });

    return 0;
}


