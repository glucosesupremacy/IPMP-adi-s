vector<long long int> twoOddNum(long long int arr[], long long int n)
{
    // code here
    long long int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = x ^ arr[i];
    }
    // x has xor of both elements
    // now divide into two groups
    long long int x1 = 0;
    long long int x2 = 0;
    long long int bit = x & ~(x - 1); // rightmost bit
    for (int i = 0; i < n; i++)
    {
        if (bit & arr[i])
        {
            x1 = x1 ^ arr[i];
        }
        else
        {
            x2 = x2 ^ arr[i];
        }
    }
    if (x2 < x1)
    {
        return {x1, x2};
    }
    else
    {
        return {x2, x1};
    }
}