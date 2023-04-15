// basically knapsack

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m; // money
    cin >> n >> m;
    vector<int> cost(n);
    vector<int> page(n);
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        cost[i] = m;
    }
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        page[i] = m;
    }
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            dp[i][j] = dp[i - 1][j];
            int rem = j - cost[i - 1];
            if (rem >= 0)
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][rem] + page[i - 1]);
            }
        }
    }
    cout << dp[n][m] << endl;
}