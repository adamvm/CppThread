/*
Given a string, return a character that is most commonly used in the string
*/

#include <iostream>
#include <map>

char maxChar(std::string word);

int main()
{
    std::cout << maxChar("Alibababaa");

    return 0;
}

char maxChar(std::string word)
{
    int counter[256] = {0};
    char answer;
    int max = 0;
    int size = word.size();

    for (int i = 0; i < size; i++)
    {
        counter[word[i]]++;
        if (counter[word[i]] > max)
        {
            max = counter[word[i]];
            answer = word[i];
        }
    }

    return answer;
}