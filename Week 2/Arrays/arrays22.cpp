bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int r = matrix.size();
    int c = matrix[0].size();
    int i = 0;
    int j = c - 1;
    while (j > -1 && i < r)
    {
        if (matrix[i][j] == target)
        {
            return true;
        }
        else if (matrix[i][j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}