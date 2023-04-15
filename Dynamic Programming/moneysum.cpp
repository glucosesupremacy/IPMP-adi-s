#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxi = n * 1000; // because value of coins is <=1000
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    vector<vector<int>> dp(n+1, vector<int>(maxi + 1, 0)); //inner vector stores only 0/1s

    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= maxi; j++)
        {
            dp[i][j] = dp[i - 1][j];
            int rem = j - arr[i - 1];
            if (rem >= 0 && dp[i - 1][rem] == 1)
            {
                dp[i][j] = 1;
            }
        }
    }
    for (int j = 1; j <= maxi; j++)
    {
        if (dp[n][j] == 1)
        {
            cout << j << endl;
        }
    }
}