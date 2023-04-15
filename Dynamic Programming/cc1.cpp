#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t;
    cin >> n >> t;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    vector<int> dp(t + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - arr[j] >= 0)
            {
                dp[i] += dp[i - arr[j]];
            }
        }
    }
    cout << dp[t] << endl;
}