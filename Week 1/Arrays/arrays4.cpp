#include <bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int> nums)
{
    // Code here.
    int x = 0;
    for (auto it : nums)
    {
        x = x ^ it;
    }
    int diff = x & ~(x - 1); //& with two's complement(~(x-1))
    int num1 = 0;
    int num2 = 0;
    for (auto it : nums)
    {
        if (it & diff)
        {
            num1 = num1 ^ it;
        }
        else
        {
            num2 = num2 ^ it;
        }
    }
    if (num1 < num2)
    {
        return {num1, num2};
    }
    else
    {
        return {num2, num1};
    }
}