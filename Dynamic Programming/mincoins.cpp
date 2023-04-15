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

    vector<int> dp(t + 1, INT_MAX);

    dp[0] = 0;

    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - arr[j] >= 0)
            {
                dp[i] = min(dp[i], dp[i - arr[j]] + 1);
            }
        }
    }
    if(dp[t] == INT_MAX){
        cout << 1 << endl;
    }else{
        cout << dp[t] << endl;
    }
}