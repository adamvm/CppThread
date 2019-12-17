// vector::data
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    std::vector<int> v {};

    cout << "Vector size: " << v.size() << endl;
    cout << "Vector capacity: " << v.capacity() << endl;
    
    v.resize(10);
    v.assign(v.size(),5);

    cout << "Vector size: " << v.size() << endl;
    cout << "Vector capacity: " << v.capacity() << endl;

    v.reserve(20);

    cout << "Vector size: " << v.size() << endl;
    cout << "Vector capacity: " << v.capacity() << endl;

    v.shrink_to_fit();

    cout << "Vector size: " << v.size() << endl;
    cout << "Vector capacity: " << v.capacity() << endl;

    return 0;
}