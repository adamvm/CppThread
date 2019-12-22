// Selection sort

#include <iostream>
#include <array>

void swap(int & number1, int & number2);
template <size_t N>
void show(const std::array<int, N> &array);

int main()
{
    std::array<int, 4> numbers = {7, 2, 14, 1};

    show(numbers);

    swap(numbers[0], numbers[3]);

    std::cout << std::endl;
    
    show(numbers);

    return 0;
}

void swap(int & number1, int & number2)
{
    int temp;
    temp = number1;
    number1 = number2;
    number2 = temp;
}

template <size_t N>
void show(const std::array<int, N> &array){
    for (auto &i : array)
        std::cout << i << " ";
}