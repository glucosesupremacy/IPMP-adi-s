int equilibriumPoint(long long arr[], int n)
{

    // Your code here
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    long long temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (temp == sum - arr[i] - temp)
        {
            return i + 1;
        }
        temp += arr[i];
    }
    return -1;
}