/*
1. Create an empty vector.
2. Print size and capacity.
3. Resize vector to size 10 and fill it with value 5.
4. Print size and capacity.
5. Reserve space for 20 elements.
6. Print size and capacity.
7. Shrink to fit.
8. Print size and capacity.
*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vector1;

    std::cout << "Vector size: " << vector1.size() << std::endl;
    std::cout << "Vector capacity: " << vector1.capacity() << std::endl;

    vector1.resize(10);
    std::fill(vector1.begin(), vector1.end(), 5);

    std::cout << "Vector size: " << vector1.size() << std::endl;
    std::cout << "Vector capacity: " << vector1.capacity() << std::endl;

    vector1.reserve(20);

    std::cout << "Vector size: " << vector1.size() << std::endl;
    std::cout << "Vector capacity: " << vector1.capacity() << std::endl;

    vector1.shrink_to_fit();

    std::cout << "Vector size: " << vector1.size() << std::endl;
    std::cout << "Vector capacity: " << vector1.capacity() << std::endl;

    return 0;
}