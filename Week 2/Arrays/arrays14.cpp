int firstMissingPositive(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0 && arr[i] < n)
        {
            if (arr[arr[i]] == -1984)
            {
                continue;
            }
            if (i == arr[i])
            {
                arr[i] = -1984;
                continue;
            }
            if (arr[i] != arr[arr[i]])
            {
                int temp = arr[arr[i]];
                arr[arr[i]] = -1984;
                arr[i] = temp;
                i--;
            }
            else
            {
                arr[arr[i]] = -1984;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << endl;
        if (arr[i] != -1984)
        {
            return i;
        }
    }
    if (arr[0] == n)
    {
        n++;
    }
    return n;
}