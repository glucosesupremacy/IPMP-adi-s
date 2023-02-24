vector<int> nextPermutation(int n, vector<int> arr)
{
    // code here
    int j = -1;
    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
        {
            j = i;
            break;
        }
        if (i == 1)
        {
            j = 0;
        }
    }
    if (j == 0)
    {
        sort(arr.begin(), arr.end());
        return arr;
    }
    int d1 = j - 1;
    int min_diff = arr[d1 + 1] - arr[d1];
    int d2 = d1 + 1;
    for (int i = d1 + 2; i < n; i++)
    {
        int diff = arr[i] - arr[d1];
        if (diff < min_diff && diff > 0)
        {
            min_diff = diff;
            d2 = i;
        }
    }
    // cout << d1 << ' ' << d2 << endl;
    swap(arr[d1], arr[d2]);
    sort(arr.begin() + d1 + 1, arr.end());
    return arr;
}