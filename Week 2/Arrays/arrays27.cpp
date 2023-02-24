#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> one, pair<int, int> two)
{
    if (one.second == two.second)
    {
        return one.first < two.first;
    }
    else
    {
        return one.second > two.second;
    }
}
int main()
{
    // code
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> arr;
        map<int, int> store;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (store.find(x) != store.end())
            {
                store[x] += 1;
            }
            else
            {
                store.insert({x, 1});
            }
        }
        for (auto it : store)
        {
            arr.push_back(it);
        }
        sort(arr.begin(), arr.end(), compare);
        for (auto it : arr)
        {
            for (int i = 0; i < it.second; i++)
            {
                cout << it.first << " ";
            }
        }
        cout << endl;
    }
    return 0;
}