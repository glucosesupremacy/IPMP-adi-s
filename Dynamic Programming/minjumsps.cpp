#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
    int c = 0;
    int count = 0;
    int r = 0;
    for (int i = 0; i < n - 1; i++)
    {
        r = max(r, i + arr[i]);
        if (i == c)
        {
            c = r;
            count++;
            if (c > n - 2)
            {
                return count;
            }
        }
    }
    return -1;
}