// https://app.codility.com/programmers/lessons/2-arrays/odd_occurrences_in_array/

#include <iostream>
#include <vector>
#include <unordered_set>

int solution(std::vector<int> &A);

int main()
{
    std::vector<int> A = {9, 3, 9, 3, 9, 7, 9};
    std::cout << solution(A);

    return 0;
}

int solution(std::vector<int> &A)
{
    std::unordered_set<int> s;
    for (const auto &i : A)
    {
        if (s.find(i) != s.end())
            s.erase(i);
        else s.insert(i);
    }
    
    return *s.begin();
}