class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &arr, int target)
    {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        vector<vector<int>> res;
        for (int i = 0; i < n; i++)
        {
            int key = arr[i];
            long long rem = target - key;
            for (int j = i + 1; j < n; j++)
            {
                int l = j + 1;
                int r = n - 1;
                int key2 = arr[j];
                long long rem2 = rem - key2;
                while (l < r && l < n && r >= 0)
                {
                    long long one = arr[l];
                    long long two = arr[r];
                    if (one + two < rem2)
                    {
                        l++;
                    }
                    else if (one + two > rem2)
                    {
                        r--;
                    }
                    else
                    {
                        vector<int> temp = {key, key2, arr[l], arr[r]};
                        res.push_back(temp);
                        while (l < n - 1 && arr[l] == arr[l + 1])
                        {
                            l++;
                        }
                        while (r > l + 1 && arr[r] == arr[r - 1])
                        {
                            r--;
                        }
                        l++;
                    }
                }
                while (j + 1 < arr.size() && arr[j + 1] == arr[j])
                    ++j;
            }
            while (i + 1 < arr.size() && arr[i + 1] == arr[i])
                ++i;
        }
        return res;
    }
};
