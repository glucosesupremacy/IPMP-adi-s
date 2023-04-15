int max(int arr[], int l, int r)
{
    if (l == r)
    {
        return arr[r];
    }
    int m = (l + r) / 2;
    if (arr[m] > arr[m - 1] && arr[m] > arr[m + 1])
    {
        return arr[m];
    }
    else if (arr[m] < arr[m + 1])
    {
        return max(arr, m + 1, r);
    }
    else
    {
        return max(arr, l, m - 1);
    }
}