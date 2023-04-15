#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int dp[n];

    dp[0] = 1;

    for (int i = 1; i < n; i++)
    {
        dp[i] = 1;
        for (int j = 0; j < i; j++){
            if (arr[i] > arr[j] && dp[i] <= dp[j]){
                dp[i] = dp[j] + 1;
            }
        } 
    }

    cout << *max_element(dp, dp + n) << endl;
}