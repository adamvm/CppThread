#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<int, std::string> m;

    m.insert({0, "zero"});
    m.insert({1, "one"});
    m.insert({2, "two"});    
    m.insert({3, "thr"});
    m.insert({3, "tfsfr"});
    m.insert({3, "t3123hr"});
    m.insert({4, "four"});
    m.insert({5, "five"});

    m.insert({3, "three"});
    m.erase(5);


    for (const auto &el : m)
        std::cout << el.first << " : " << m.count(el.first) << " : " << el.second << std::endl;

    std::cout << "Number of elements: " << m.size() << std::endl;
    std::cout << "Element 4: " << m.at(4) << std::endl;

    return 0;
}