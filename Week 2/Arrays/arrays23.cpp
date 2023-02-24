vector<int> spiralOrder(vector<vector<int>> &arr)
{
    vector<int> res;
    int rows = arr.size();
    int cols = arr[0].size();
    int l = 0;
    int r = cols - 1;
    int t = 0;
    int b = rows - 1;
    int dir = 1;
    while (l <= r && t <= b)
    {
        if (dir == 1)
        {
            cout << "Right" << endl;
            for (int i = l; i <= r; i++)
            {
                res.push_back(arr[t][i]);
            }
            t++;
            dir = 2;
        }
        else if (dir == 2)
        {
            cout << "Down" << endl;
            for (int i = t; i <= b; i++)
            {
                res.push_back(arr[i][r]);
            }
            r--;
            dir = 3;
        }
        else if (dir == 3)
        {
            cout << "Left" << endl;
            for (int i = r; i >= l; i--)
            {
                res.push_back(arr[b][i]);
            }
            b--;
            dir = 4;
        }
        else if (dir == 4)
        {
            cout << "Top" << endl;
            for (int i = b; i >= t; i--)
            {
                res.push_back(arr[i][l]);
            }
            l++;
            dir = 1;
        }
    }
    return res;
}