

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm> 

int main(void)
{
    std::list<std::string> words_1;
    std::vector<std::string> words_2;

    words_1.push_back("some");
    words_1.push_back("list");
    words_1.push_back("of");
    words_1.push_back("words");
    words_1.push_back("to");
    words_1.push_back("be");
    words_1.push_back("alphabetized");

    words_1.sort();

    std::cout << "From list" << std::endl << std::endl;
    for (auto word : words_1)
    {
        std::cout << word << std::endl;
    }

    words_2.push_back("some");
    words_2.push_back("list");
    words_2.push_back("of");
    words_2.push_back("words");
    words_2.push_back("to");
    words_2.push_back("be");
    words_2.push_back("alphabetized");

    std::sort( words_2.begin(), words_2.end(), [](auto lhs, auto rhs) -> bool { return lhs < rhs; } );

    std::cout << std::endl << "From Vector" << std::endl << std::endl;
    for (auto word : words_2)
    {
        std::cout << word << std::endl;
    }


    return 0;
}