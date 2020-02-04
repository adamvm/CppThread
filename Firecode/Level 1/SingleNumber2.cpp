/*
Write a method that returns a number that appears only once in an array.
Assume the array will surely have a unique value. If the array is empty return 0.
Examples: {1,2,3,4,1,2,4,3,5} ==> 5
*/

#include <iostream>
#include <map>

int single_number(int arr[], int sz);

int main()
{
    int arr[] = {1,2,3,4,1,2,4,3,5};

    std::cout << single_number(arr, 9);

    return 0;
}

int single_number(int arr[], int sz)
{
    std::map<int, int> abc;

    for (int i = 0; i < sz; i++)
    {
        auto search = abc.find(arr[i]);

        if (search != abc.end())
            search->second++;     
        else
            abc.insert(std::pair<int, int> (arr[i], 1));          
    }

    for (auto const & el : abc)
    {   
        if (el.second == 1)
            return el.first;
    }

    return 666;
}