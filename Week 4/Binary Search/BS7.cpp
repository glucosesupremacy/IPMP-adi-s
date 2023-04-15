// floor and ceiling in unsorted array

#include <bits/stdc++.h>
using namespace std;

vector<int> func(vector<int> arr, int n, int x)
{

    int l = 0;
    int r = n - 1;
    vector<int> res = {0, 0};
    while (l < r + 1)
    {
        int m = (l + r) / 2;
        if (arr[m] > x)
        {
            r = m - 1;
        }
        else if (arr[m] < x)
        {
            l = m + 1;
        }
        else
        {
            res[0] = arr[m];
            res[1] = res[0];
            return res;
        }
    }
    if (l != -1)
    {
        res[0] == arr[l];
    }
    if (r != -1)
    {
        res[1] == arr[r];
    }
    return res;
}