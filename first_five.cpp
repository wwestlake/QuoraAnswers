

#include <iostream>
#include <vector>

std::vector<int> even()
{
    std::vector<int> result;
    for (int i = 0; i < 5; i++)
        result.push_back((i + 1) * 2);
    return result;
}

std::vector<int> odd()
{
    std::vector<int> result;
    for (int i = 0; i < 5; i++)
        result.push_back((i * 2) + 1);
    return result;
}


int main(void)
{
    char selection;
    std::cout << "First five (O)dd or (E)ven numbers O|E :";
    std::cout.flush();



    std::vector<int> values;

    while (true) {
        std::cin >> selection;
        if (selection == 'O' || selection == 'o') {
            values = odd();
            break;
        } else if (selection == 'E' || selection == 'e') {
            values = even();
            break;
        } else {
            std::cout << "Error, try again" << std::endl;
            continue;
        }
    }

    for (auto i : values)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;


    return 0;
}


