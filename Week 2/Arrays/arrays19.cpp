bool subArrayExists(int arr[], int n)
{
    // Your code here
    set<int> store;
    store.insert(0);
    store.insert(arr[0]);
    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
        if (store.find(arr[i]) != store.end())
        {
            return true;
        }
        store.insert(arr[i]);
    }
    return false;
}