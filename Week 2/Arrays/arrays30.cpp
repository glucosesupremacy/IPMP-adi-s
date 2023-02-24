class Solution
{
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void sortColors(vector<int> &arr)
    {
        // sort as 0s 1s 2s
        int n = arr.size();
        int l = 0;
        int r = n - 1;
        int last_r = 0;
        int mark = 0;
        while (l < r)
        {
            last_r = r;
            while (l < n && arr[l] != 2)
            {
                l++;
            }
            while (r >= 0 && arr[r] == 2)
            {
                mark = 1;
                r--;
            }
            if (l < r)
            {
                swap(arr[l], arr[r]);
            }
        }
        // r is now at the first 2
        l = 0;
        if (mark == 0)
        {
            r = n - 1;
        }
        else
        {
            r = last_r - 1;
        }

        while (l < r)
        {
            while (l < n && arr[l] != 1)
            {
                l++;
            }
            while (r >= 0 && arr[r] != 0)
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
