vector<int> twoRepeated(int arr[], int n)
{
    // Your code here
    vector<int> res;
    for (int i = 0; i < n + 2; i++)
    {
        int key = abs(arr[i]);
        if (arr[key] < 0)
        {
            res.push_back(key);
        }
        else
        {
            arr[key] = -arr[key];
        }
    }
    return res;
}