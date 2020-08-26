
#include <iostream>
#include <iomanip>

std::ostream& hex_fmt(std::ostream& os)
{
   os << "0x" << std::hex << std::setw(8) << std::setfill('0');
}



int main(int ac, char ** av)
{
    std::cout << hex_fmt << 12345 << std::endl;


    return 0;
}

