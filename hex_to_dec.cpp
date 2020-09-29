#include <iostream>
#include <sstream>


template <typename T>
T parse_hex_number(std::string str)
{
    std::string num = str.substr(2);
    std::stringstream ss;
    ss << std::hex << num;
    T result(0);
    ss >> result;
    return result; 
} 


int main(void)
{
    std::string hex_val = "0xABCD0012";

    int num = parse_hex_number<int>(hex_val);

    std::cout << hex_val << " = " << num << std::endl;

    return 0;

}
