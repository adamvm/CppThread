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