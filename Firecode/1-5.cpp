#include <iostream>
#include <algorithm>
#include <map>

int single_number(int arr[], int sz)
{
    std::map<int, int> abc;

    for (int i = 0; i < sz; i++)
    {
        auto search = abc.find(arr[i]);

        if (search != abc.end())
        {
            search->second++;
            std::cout << search->first << " " << search->second << std::endl;
        }           
        else
        {
            abc.insert(std::pair<int, int> (arr[i], 1));          
            std::cout << search->first << " " << search->second << std::endl;
        }
    }

    for (auto const & el : abc)
    {   
        if (el.second == 1)
            return el.first;
    }

    return -1;
}

int main()
{
    int array[] = {1,2,3,4,1,2,4,3,5};

    std::cout << "The number that appears once in the array is: " << single_number(array, 9);

    return 0;
}