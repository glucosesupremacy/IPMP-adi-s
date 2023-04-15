int binarySearch(int arr[], int l, int r)
{
    if (l <= r)
    {
        int m = l + (r - l) / 2;
        if (m == arr[m])
            return m;
        if (m < arr[r])
        {
            return binarySearch(arr, (m + 1), r);
        }
        else if (m > arr[l])
        {
            return binarySearch(arr, l, (m - 1));
        }
    }
    return -1; //no result found
}