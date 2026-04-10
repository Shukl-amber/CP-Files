class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size(), n = matrix[0].size();
        int i = m - 1, j = 0, temp;

        while (i >= 0 && j < n)
        {
            temp = matrix[i][j];

            if (temp == target)
                return true;
            else if (target < temp)
                i--;
            else
                j++;
        }
        return false;
    }
};