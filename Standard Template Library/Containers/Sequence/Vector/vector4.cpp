// vector::data
// emplace jest rekomendowany zamiast push_back
#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    std::vector<int> v {1, 3, 14, 53, 42};

    v.emplace(v.begin(), 6);
    v.emplace_back(666);

    for (auto const & element : v)
    {
        cout << element << " ";
    }
    
    

    return 0;
}