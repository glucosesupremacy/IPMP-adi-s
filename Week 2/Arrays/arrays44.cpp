class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        // Your code here
        int l = 0;
        int r = 0;
        long long sum = 0;
        while (l <= r && r < n)
        {
            sum += arr[r];
            if (sum == s)
            {
                return {l + 1, r + 1};
            }
            else if (sum > s)
            {
                if (l == r)
                {
                    sum = 0;
                    l++;
                    r++;
                    continue;
                }
                sum -= arr[l];
                l++;
                sum -= arr[r];
            }
            else
            {
                r++;
            }
        }
        return {-1};
    }
};