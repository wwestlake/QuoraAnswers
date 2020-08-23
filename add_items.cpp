
#include <iostream>
#include <algorithm>
#include <map>
#include <functional>
#include <string>
#include <experimental/optional>


#include <iostream>
#include <vector>

std::experimental::optional<int> getFirst(const std::vector<int>& vec){
  if (!vec.empty()) return std::experimental::optional<int>(vec[0]);
  else return std::experimental::optional<int>();
}



int main(int ac, char ** av)
{
    std::vector<int> myVec{1, 2, 3};
    std::vector<int> myEmptyVec;
    
    auto myInt= getFirst(myVec);
    
    if (myInt){
        std::cout << "*myInt: "  << *myInt << std::endl;
        std::cout << "myInt.value(): " << myInt.value() << std::endl;
        std::cout << "myInt.value_or(2017):" << myInt.value_or(2017) << std::endl;
    }
    
    std::cout << std::endl;
    
    auto myEmptyInt= getFirst(myEmptyVec);
    
    if (!myEmptyInt){
        std::cout << "myEmptyInt.value_or(2017):" << myEmptyInt.value_or(2017) << std::endl;
    }

    return 0;
}

