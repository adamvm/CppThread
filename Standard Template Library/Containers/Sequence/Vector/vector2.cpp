// vector::data
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    std::vector<int> v {1, 2, 4, 5, 6};

    v.pop_back();
    v.push_back(5);
    v.emplace_back(12);

    cout << "Vector size: " << v.size() << endl;
    cout << "Vector max_size: " << v.max_size() << endl;

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    v.clear();
    cout << "Vector size: " << v.size() << endl;  

    v.data();

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}