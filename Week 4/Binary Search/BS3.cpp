class Solution
{
public:
    int binary_search(vector<int> &arr, int target, int l, int r)
    {
        int soln = -1;
        int m = (l + r) / 2;
        if (l == r && arr[m] != target)
        {
            return -1;
        }
        if (arr[m] == target)
        {
            if (m > 0 && arr[m - 1] == target)
            {
                soln = binary_search(arr, target, l, m - 1);
            }
            else
            {
                soln = m;
            }
            return soln;
        }
        else if (arr[m] > target)
        {
            soln = binary_search(arr, target, l, m - 1);
        }
        else
        {
            soln = binary_search(arr, target, m + 1, r);
        }
        return soln;
    }
    int majorityElement(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            int ind = binary_search(arr, arr[i], 0, n - 1);
            cout << ind << endl;
            if (arr[ind + n / 2] == arr[ind])
            {
                return arr[ind];
            }
        }
        return -1;
    }
};