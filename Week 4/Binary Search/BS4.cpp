#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &arr, int target)
    {
        int n = arr.size();
        int l = 0;
        int r = n - 1;
        int m = 0;
        // find min element
        while (l < r)
        {
            m = l + (r - l) / 2;
            if (arr[m] > r)
            {
                l = m + 1;
            }
            else
            {
                r = m;
            }
        }
        int min = arr[l];
        if (target == min)
        {
            return l;
        }
        else if (target <= arr[n - 1])
        {
            r = n - 1;
            l = l + 1;
        }
        else
        {
            r = l - 1;
            l = 0;
        }
        // search in that range
        while (l <= r)
        {
            m = l + (r - l) / 2;
            if (arr[m] == target)
            {
                return m;
            }
            else if (arr[m] > target)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        return -1;
    }
};