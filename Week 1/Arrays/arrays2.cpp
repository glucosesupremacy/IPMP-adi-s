#include <bits/stdc++.h>
using namespace std;

int findSingle(int n, int arr[])
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}