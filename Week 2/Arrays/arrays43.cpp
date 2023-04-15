int bitonic(vector<int> arr, int n)
{
    // code here
    vector<int> inc(n, 0);
    vector<int> dec(n, 0);
    int inc_count = 0;
    int dec_count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] <= arr[i])
        {
            inc_count++;
        }
        else
        {
            inc_count = 0;
        }
        inc[i] = inc_count;
        // cout << inc[i] << endl;
    }
    // cout << "--------" << endl;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i + 1] <= arr[i])
        {
            dec_count++;
        }
        else
        {
            dec_count = 0;
        }
        dec[i] = dec_count;
        // cout << dec[i] << endl;
    }
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        sum = inc[i] + dec[i];
        if (sum > max)
        {
            max = sum;
        }
    }
    return max + 1;
}