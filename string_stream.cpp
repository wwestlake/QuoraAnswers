
#include <iostream>
#include <sstream>
#include <string>

std::string read_a_line_and_print()
{
    std::string val;
    std::getline(std::cin, val);
    std::cout << val << std::endl;
    return val;
}

void test_string_stream()
{
    int a,b,c;
    std::stringstream ss;
    std::string some_ints;
    std::cout << "enter 3 ints" << std::endl;
    some_ints = read_a_line_and_print();

    ss << some_ints;
    ss >> a >> b >> c;

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

}


int main(int ac, char ** av)
{
    test_string_stream();
    return 0;
}
