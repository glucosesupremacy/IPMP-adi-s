vector<int> find3Numbers(vector<int> arr, int n)
{
    // Your code here
    vector<int> left(n, -1);
    vector<int> right(n, -1);
    int min = arr[0];
    int mindex = 0;
    int max = arr[n - 1];
    int maxdex = n - 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            mindex = i;
        }
        else if (arr[i] > min)
        {
            left[i] = mindex;
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxdex = i;
        }
        else if (arr[i] < max)
        {
            right[i] = maxdex;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (left[i] >= 0 && right[i] > 0)
        {
            return {arr[left[i]], arr[i], arr[right[i]]};
        }
    }
    return {};
}