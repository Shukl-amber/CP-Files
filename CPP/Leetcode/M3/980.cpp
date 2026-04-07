class Solution
{
public:
    int uniquePathsIII(vector<vector<int>> &grid)
    {
        int m = grid.size(), n = grid[0].size();
        int sx = 0, sy = 0, need = 0, ans = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] != -1)
                    need++;
                if (grid[i][j] == 1)
                    sx = i, sy = j;
            }
        }

        function<void(int, int, int)> dfs = [&](int x, int y, int left)
        {
            if (grid[x][y] == 2)
            {
                if (left == 1)
                    ans++;
                return;
            }

            int old = grid[x][y];
            grid[x][y] = -1;

            const int dx[4] = {1, -1, 0, 0};
            const int dy[4] = {0, 0, 1, -1};
            for (int k = 0; k < 4; k++)
            {
                int nx = x + dx[k], ny = y + dy[k];
                if (nx < 0 || ny < 0 || nx >= m || ny >= n || grid[nx][ny] == -1)
                    continue;
                dfs(nx, ny, left - 1);
            }

            grid[x][y] = old;
        };

        dfs(sx, sy, need);
        return ans;
    }
};