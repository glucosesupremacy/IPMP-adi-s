class Solution
{
public:
    void setZeroes(vector<vector<int>> &arr)
    {
        int rows = arr.size();
        int cols = arr[0].size();
        vector<int> row(rows, 1);
        vector<int> col(cols, 1);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (arr[i][j] == 0)
                {
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }
        // setting rows and cols
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (row[i] == 0 || col[j] == 0)
                {
                    arr[i][j] = 0;
                }
            }
        }
    }
};
