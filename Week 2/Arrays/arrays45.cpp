// play on the subarray with zero sum question
class Solution
{
public:
    int findMaxLength(vector<int> &arr)
    {
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                arr[i] = -1;
            }
        }
        int max_len = 0;
        map<int, int> store;
        store.insert(make_pair(0, 0));
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (store.find(sum) != store.end())
            {
                int len = i - store[sum] + 1;
                if (len > max_len)
                {
                    max_len = len;
                }
            }
            else
            {
                store.insert(make_pair(sum, i + 1));
            }
        }
        return max_len;
    }
};