vector<int> duplicates(int arr[], int n)
{
    // code here
    set<int> res;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = n;
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int key = abs(arr[i]);
        if (key == n)
        {
            if (count > 1)
            {
                res.insert(0);
            }
            continue;
        }
        if (arr[key] < 0)
        {
            res.insert(key);
        }
        else
        {
            arr[key] *= -1;
        }
    }
    vector<int> res2(res.begin(), res.end());
    if (res2.size() == 0)
    {
        res2.push_back(-1);
    }
    return res2;
}