class Solution
{
public:
    // Returns maximum repeating element in arr[0..n-1].
    // The array elements are in range from 0 to k-1
    int maxRepeating(int *arr, int n, int k)
    {
        // code here
        for (int i = 0; i < n; i++)
        {
            int key = arr[i];
            // you have to do %k because the array elements become > k when you add k to them
            arr[key % k] += k;
            // increasing by k makes sure that you will have max value for max repeating number
        }
        int max_count = 0;
        int element = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int key = arr[i] % k;
            int count = arr[key] / k;
            if (count > max_count)
            {
                max_count = count;
            }
        }
        // go through entire arr once
        // mod with its index to get initial value
        // divide by k to get number of times it occured
        for (int i = 0; i < n; i++)
        {
            int key = arr[i] % k;
            int count = arr[key] / k;
            if (count == max_count && key < element)
            {
                element = key;
            }
        }
        // have to go through again to handle the "return smaller" case
        return element;
    }
};