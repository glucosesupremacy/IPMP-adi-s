//this takes a lot of time (129/133 passed, but matches GfG)

class Solution
{
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    vector<int> rearrangeArray(vector<int> &arr)
    {
        int outofplace = -1;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            if ((i % 2 == 0 && arr[i] < 0) || (i % 2 != 0 && arr[i] > 0))
            {
                outofplace = i;
            }
            if (outofplace != -1)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if ((arr[j] < 0 && arr[i] > 0) || (arr[j] > 0 && arr[i] < 0))
                    {
                        reverse(arr.begin() + i, arr.begin() + j);
                        reverse(arr.begin() + i, arr.begin() + j + 1);
                        outofplace = -1;
                        break;
                    }
                }
            }
        }
        return arr;
    }
};