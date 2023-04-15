#include <bits/stdc++.h>
using namespace std;
//subsequence question, not substring
int longestPalinSubseq(string A)
{
    int m = A.length();
    string copy = A;

    reverse(copy.begin(), copy.end());
    int n = copy.length();

    int dp[m + 1][n + 1];

    for (int i = 0; i < m + 1; i++)
        dp[i][0] = 0;

    for (int j = 0; j < n + 1; j++)
        dp[0][j] = 0;

    for (int i = 1; i < m + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (A[i - 1] == copy[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n]; //last element in dp array
}