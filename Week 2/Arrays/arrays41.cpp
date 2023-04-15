class Solution
{
public:
    int maxSubArray(vector<int> &arr)
    {
        int n = arr.size();
        int max = INT_MIN;
        int curr = 0;
        for (int i = 0; i < n; i++)
        {
            curr += arr[i];
            if (curr < 0)//we use curr < 0 because at a point where curr becomes < 0, the contribution of the negatives is more than that of positives, so you might as well reset the sum to 0
            {
                if (max < curr)
                {
                    max = curr;
                }
                curr = 0;//you want to count a negative element only once(that too only for the case where every array element is negative)
            }
            else
            {
                if (max < curr)
                {
                    max = curr;
                }
            }
        }
        return max;
    }
};