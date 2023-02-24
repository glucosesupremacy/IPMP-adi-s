vector<int> productExceptSelf(vector<int> &arr)
{
    int n = arr.size();
    vector<int> res;
    int prod = arr[0];
    res.push_back(prod);
    for (int i = 1; i < n; i++)
    {
        res.push_back(prod);
        prod *= arr[i];
    }
    prod = arr[n - 1];
    for (int i = n - 2; i > 0; i--)
    {
        res[i] *= prod;
        prod = prod * arr[i];
    }
    res[0] = prod;
    return res;
}