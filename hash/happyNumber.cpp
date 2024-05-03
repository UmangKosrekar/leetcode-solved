#include <iostream>
#include <unordered_set>
#include <cmath>

class Solution
{
public:
    bool isHappy(int n)
    {
        std::unordered_set<int> seen;

        while (true)
        {
            int sum = 0;
            while (n != 0)
            {
                sum += std::pow(n % 10, 2);
                n = n / 10;
            }

            if (sum == 1)
                return true;
            if (seen.count(sum))
                return false;

            n = sum;
            seen.insert(sum);
        }
    }
};
