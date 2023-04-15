#include <bits/stdc++.h>
using namespace std;
//substring question ie. consider consecutive elements
string longestPalindrome(string Str)
{
    int n = Str.length();
    int dp[n][n];
    int s = 0;
    int len = 0;

    for (int k = 0; k < n; k++)
    {
        for (int i = 0, j = k; j < n; i++, j++)
        {
            if (k == 0)
            {
                dp[i][j] = 1;
            }
            else if (k == 1)
            {
                if (Str[i] == Str[j])
                {
                    dp[i][j] = 1;
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
            else
            {
                if (Str[i] == Str[j])
                {
                    dp[i][j] = 1 && dp[i + 1][j - 1];
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
            if (dp[i][j] == 1 && len < k + 1)
            {
                len = k + 1;
                s = i;
            }
        }
    }
    string k = Str.substr(s, len);
    return k;
}