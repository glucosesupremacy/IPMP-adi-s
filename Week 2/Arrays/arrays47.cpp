class Solution
{
public:
    int majorityElement(vector<int> &arr)
    {
        int element;
        int count = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if (count == 0)
            {
                element = arr[i];
                count++;
            }
            else
            {
                if (element == arr[i])
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
        }
        return element;
    }
};