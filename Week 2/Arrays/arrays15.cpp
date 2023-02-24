#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[4][4] = {{0, 0, 0, 1},
                     {0, 1, 1, 1},
                     {1, 1, 1, 1},
                     {0, 0, 0, 0}};
    int j = 3;
    int leftmost = j;
    int max_row = 0;
    for (int i = 0; i < 6; i++)
    {
        while (j > 0 && arr[i][j - 1] == 1)
        {
            j--;
        }
        if (j < leftmost)
        {
            leftmost = j;
            max_row = i;
        }
        if (j == 0)
        {
            break;
        }
    }
    cout << max_row << endl;
    return 0;
}
