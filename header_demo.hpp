#ifndef __HEADER_DEMO_HPP
#define __HEADER_DEMO_HPP

#include <string>

// this is ok as it is a typedef, does not generate any code until used
typedef std::string str;

// this is ok, does not generate code until used
typedef struct some_structure {
    int a;
    int b;
} some_structure;

class Customer {
private:
    std::string _id;
    std::string _name;

public:
    // perfectly ok in header
    Customer(std::string id, std::string name) : _id(id), _name(name) {}

    std::string getId() { return _id; }
    std::string getName() { return _name; }

    bool bigBusinessRule();

    bool biggerBusinessRule(const some_structure& data); // define in cpp file

};

inline bool Customer::bigBusinessRule()
{
    // define here, this is ok because it is inline
}





#endif // __HEADER_DEMO_HPP