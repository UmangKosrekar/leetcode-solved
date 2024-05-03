#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_set<int> data;
        for (int num : nums)
        {
            if (data.count(num))
            {
                data.erase(num);
            }
            else
            {
                data.insert(num);
            }
        }
        return *data.begin();
    }
};

int main()
{
    Solution sol;

    vector<int> vec = {1};

    int result = sol.singleNumber(vec);

    cout << endl;
    cout << result;
    cout << endl;

    return 0;
}