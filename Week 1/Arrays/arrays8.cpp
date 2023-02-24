bool hasArrayTwoCandidates(int arr[], int n, int x)
{
    // code here
    sort(arr, arr + n);
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        int a = arr[l];
        int b = arr[r];
        if (a + b < x)
        {
            l++;
        }
        else if (a + b > x)
        {
            r--;
        }
        else
        {
            return true;
        }
    }
    return false;
}