#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>


bool check(std::string & test)
{
    return test.size()==3;
}

class Check
{
public:
    bool operator()(std::string & test)
    {
        return test.size()==3;
    }
} check1;

int main()
{

    // VERSION WITH LAMBDA

    std::vector<std::string> vec {"one", "two", "three"};

    std::cout << count_if(vec.begin(), vec.end(), [](std::string v){return v.size() == 3;}) << std::endl;

    // VERSION WITH FUNCTION POINTER (with check())

    std::cout << count_if(vec.begin(), vec.end(), check) << std::endl;

    // VERSION WITH FUNCTOR (with object check1)

    std::cout << count_if(vec.begin(), vec.end(), check1) << std::endl;

    return 0;
}