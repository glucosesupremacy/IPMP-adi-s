class Solution
{
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void pushZerosToEnd(int arr[], int n)
    {
        // code here
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
        // j will stay put at a zero if it is encountered
        // i will keep on moving forward and will be swapped when arr[i] is a non zero value
        // same thing as quicksort
        // use this method to maintain order
    }
};