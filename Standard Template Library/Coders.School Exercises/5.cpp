/*
1. Create a map of integers to strings with content:
{1 → ‘one’, 2 → ‘two’, 3 → ‘thr’, 4 → ‘four’, 5 → ‘five’}
2. Add a new pair: 3 → ‘three’
3. Erase element with key 5.
4. Print how many values exist for all keys
5. Find element with key 4 and print its key and value.
*/

#include <iostream>
#include <map>
#include <algorithm>

void showMap(std::map<int, std::string> m);

int main()
{
    std::map<int, std::string> map1;

    map1.insert({1, "one"});
    map1.insert({2, "two"});
    map1.insert({3, "thr"});
    map1.insert({4, "four"});
    map1.insert({5, "five"});

    showMap(map1);

    // map1.insert({3, "three"}); // This does not overwrite the existing entry!
    map1[3] = "three";
    
    showMap(map1);

    map1.erase(5);

    showMap(map1);

    auto search = map1.find(4);
    
    std::cout << search->first << " " << search->second;

    return 0;
}

void showMap(std::map<int, std::string> m)
{
    for (const auto &i : m)
        std::cout << i.first << " " << i.second << std::endl;
    std::cout << std::endl;
}