#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> data;
        for (int num : nums)
        {
            if (data.count(num) > 0)
            {
                return true;
            }
            data.insert(num);
        }
        return false;
    }
};
