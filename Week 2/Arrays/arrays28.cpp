class Solution
{
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    vector<int> sortArrayByParity(vector<int> &arr)
    {
        int n = arr.size();
        int l = 0;
        int r = n - 1;
        while (l < r)
        {
            while (l < n && arr[l] % 2 == 0)
            {
                l++;
            }
            while (r > 0 && arr[r] % 2 != 0)
            {
                r--;
            }
            if (l < r)
            {
                swap(arr[l], arr[r]);
            }
        }
        return arr;
    }
};
