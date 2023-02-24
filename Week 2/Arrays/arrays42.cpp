class Solution
{
public:
    int maxProduct(vector<int> &arr)
    {
        int maximum = arr[0];
        int curr = arr[0];
        int max_prod = arr[0];
        int min_prod = arr[0];
        int n = arr.size();
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < 0)
            {
                swap(max_prod, min_prod);
            }
            max_prod = max(arr[i], max_prod * arr[i]);//stores the max_prod ending with current element
            min_prod = min(arr[i], min_prod * arr[i]);//stores the min_prod ending with current element
            //we need to maintain the minimum because it becomes maximum when you multiply it with a negative number
            maximum = max(maximum, max_prod);
        }
        return maximum;
    }
};