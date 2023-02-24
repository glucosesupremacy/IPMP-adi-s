int closestToZero(int arr[], int n)
{
    // your code here
    sort(arr, arr + n);
    int l = 0;
    int r = n - 1;
    int diff = INT_MAX;
    int store = 0;
    while (l < r)
    {
        int sum = arr[l] + arr[r];
        int temp = -sum;
        if (abs(temp) <= diff)
        {
            diff = abs(temp);
            if (sum == -store)
            {
                store = abs(sum);
            }
            else
            {
                store = sum;
            }
        }
        if (sum < 0)
        {
            l++;
        }
        else if (sum > 0)
        {
            r--;
        }
        else
        {
            return 0;
        }
    }
    return store;
}