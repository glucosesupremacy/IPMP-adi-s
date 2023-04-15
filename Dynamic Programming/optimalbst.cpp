#include <bits/stdc++.h>
using namespace std;

int optimalSearchTree(int keys[], int freq[], int n)
{
    vector<vector<int>> dp(n, vector<int>(n, pow(10, 9)));
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = freq[i];
    }
    for (int d = 1; d < n; d++)
    {
        for (int i = 0; i < n - d; i++)
        {
            int sum = 0;
            for (int k = i; k < k + i + 1; k++)
            {
                sum += freq[k];
            }
            dp[i][i + d] = sum + dp[i + 1][i + d];
            for (int j = i + 1; j < i + d; j++)
            {
                dp[i][i + d] = min(dp[i][i + d],
                                   dp[i][j - 1] + dp[j + 1][i + d] + sum);
            }
            dp[i][i + d] = min(dp[i][i + d],
                               dp[i][i + d - 1] + sum);
        }
    }
    return dp[0][n - 1]; // top right element
}