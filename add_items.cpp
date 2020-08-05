
#include <iostream>
#include <algorithm>
#include <map>
#include <functional>
#include <string>

template <typename Key, typename Value>
auto addOrUpdateMap = [](std::map<Key,Value> map) {
    return [map](Key key, Value value) {
          map.emplace(std::make_pair(key, value));
          return self;
    };
};


int main(int ac, char ** av)
{
    std::map<std::string, int> mymap;

    addOrUpdateMap<std::string, int>(mymap)
        ("Age", 42)
        ("Height", 72)
        ("Children", 3);




    return 0;
}

