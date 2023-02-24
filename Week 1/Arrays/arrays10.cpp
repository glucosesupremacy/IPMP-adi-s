bool find3Numbers(int arr[], int n, int x)
{
    // Your Code Here
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        int key = arr[i];
        if (key > x)
        {
            break;
        }
        int goal = x - key;
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            int a = arr[l];
            int b = arr[r];
            if (a + b == goal)
            {
                return true;
            }
            else if (a + b < goal)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    return false;
}