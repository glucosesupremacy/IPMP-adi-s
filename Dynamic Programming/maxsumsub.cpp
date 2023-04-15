#include <bits/stdc++.h>
using namespace std;

int maxSumIS(int arr[], int n)
{
    int ans = 0;
    vector<int> dp(n,0);
    for (int i = 0; i < n; i++)
    {
        dp[i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] > arr[j])
            {
                dp[i] = max(dp[i], dp[j] + arr[i]);
            }
        }
        ans = max(ans, dp[i]);
    }
    return ans;
}