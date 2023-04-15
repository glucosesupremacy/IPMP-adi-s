#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    int a_size = s1.size();
    int b_size = s2.size();
    vector<vector<int>> dp(a_size + 1, vector<int>(b_size + 1, INT_MAX));
    dp[0][0] = 0;
    for (int i = 0; i <= a_size; i++)
    {
        for (int j = 0; j <= b_size; j++)
        {
            if (i != 0)
            {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
            }
            if (j != 0)
            {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
            }
            if (i != 0 && j != 0)
            {
                dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + int(s1[i - 1] != s2[j - 1]));
            }
        }
    }
    cout << dp[a_size][b_size] << endl;
}