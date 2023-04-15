#include <bits/stdc++.h>
using namespace std;

int last(int arr[], int n, int x)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m] > x)
            r = m - 1;
        else if (arr[m] < x)
            l = m + 1;
        else
        {
            if (m == n - 1 || arr[m + 1] != arr[m])
                return m;
            else
                l = m + 1;
        }
    }
}

int first(int arr [], int n, int x)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m] > x)
            r = m - 1;
        else if (arr[m] < x)
            l = m + 1;
        else
        {
            if (m == 0 || arr[m - 1] != arr[m])
                return m;
            else
                r = m - 1;
        }
    }
}

int main()
{
    int arr[5] = {1,2,3,3,1};
    cout << last(arr, 5, 3) - first(arr, 5, 3) + 1 << endl;
}