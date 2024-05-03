#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{

public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> data(nums1.begin(), nums1.end());
        vector<int> result;

        for (int num : nums2)
        {
            if (data.erase(num) > 0)
            {
                result.push_back(num);
            }
        }

        return result;
    }
};
