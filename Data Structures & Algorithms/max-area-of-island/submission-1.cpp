class Solution {
   public:
    int dfs(int row, int col, vector<vector<int>>& grid, int n, int m) {
        if (row >= n || col >= m || row < 0 || col < 0 || grid[row][col] == 0) return 0;
        grid[row][col] = 0;
        return 1 + dfs(row + 1, col, grid, n, m) + dfs(row - 1, col, grid, n, m) +
               dfs(row, col + 1, grid, n, m) +dfs(row, col - 1, grid, n, m);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    ans = max(ans, dfs(i, j, grid, n, m));
                }
            }
        }
        return ans;
    }
};
