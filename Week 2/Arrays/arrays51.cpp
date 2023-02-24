void stockBuySell(int arr[], int n)
{
    // code here
    int buy = 0;
    int sell = 0;
    vector<pair<int, int>> soln;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[sell])
        {
            sell = i;
        }
        else if (arr[i] <= arr[sell])
        {
            if (buy != sell)
            {
                soln.push_back(make_pair(buy, sell));
            }
            buy = i;
            sell = i;
        }
        // cout << buy << " " << sell << endl;
    }
    if (buy < n && sell < n && buy != sell)
    {
        soln.push_back(make_pair(buy, sell));
    }
    for (auto it : soln)
    {
        cout << "(" << it.first << " " << it.second << ")"
             << " ";
    }
    if (soln.size() == 0)
    {
        cout << "No Profit";
    }
    cout << endl;
}