#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {3, 9, 4, 6, 7, 5};
    int n = arr.size();
    int min = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > min)
        {
            cout << arr[i] << " ";
        }
        else
        {
            min = arr[i];
        }
    }
    cout << endl;
    return 0;
}