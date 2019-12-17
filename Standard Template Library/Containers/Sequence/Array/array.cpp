#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> a;
    array<int, 10> b {};

    a.fill(5);
    a.at(3) = 3;
    a.swap(b);

    for (size_t i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }
    cout << endl;
        for (size_t i = 0; i < b.size(); i++)
    {
        cout << b[i];
    }
    
   


    return 0;
}

    /*
    
    array<int, 5> array = {1, 4, 5, 6, 7};

    array[15]
        
    array.at(15)
    // at will throw out an error if out of range

    array.front()
    // returns the first element

    array.back()
    // returns the last or the rightmost element in the array (if not fully filled)

    array.fill(SOMETHING)
    // fills the enitre array with SOMETHING

    array1.swap(array2)
    // swaps the content of two array of the same type and size

    array.empty()
    // checks if empty, true is empty, false otherwise

    array.size()
    // returns the number of elements

    array.max_size()
    // returns the maximum size of the array
    // size() and max_size() always match for an array

    array.begin()
    // returns an iterator pointing to the first element

    array.end()
    // returns an iterator pointing to an element next to the last element in the array

    */