#include <bits/stdc++.h>
using namespace std;

int MissingNumber(vector<int> &array, int n)
{
    int sum = 0;
    for (auto it : array)
    {
        sum += it;
    }
    sum -= n;
    return (n * (n - 1) / 2) - sum;
}