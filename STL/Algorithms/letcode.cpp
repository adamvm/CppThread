#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> & nums, int target)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            if (m.find(target - nums[i]) != m.end())
                return {m[target - nums[i]], i};
            m[nums[i]] = i;
            cout << "Cos przypisuje do czegos" << endl;
        }
    }

int main()
{
    vector<int> nums {2, 10, 11, 15, 7};

    vector<int> answer = twoSum(nums, 9);

    for (const auto & el : answer)
        cout << el << " ";

    return 0;
}