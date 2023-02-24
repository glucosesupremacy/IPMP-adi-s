class Solution
{
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void segregate0and1(int arr[], int n)
    {
        // code here
        int l = 0;
        int r = n - 1;
        while (l < r)
        {
            while (l < n && arr[l] == 0)
            {
                l++;
            }
            while (r >= 0 && arr[r] == 1)
            {
                r--;
            }
            if (l < r)
            {
                swap(arr[l], arr[r]);
            }
        }
    }
};