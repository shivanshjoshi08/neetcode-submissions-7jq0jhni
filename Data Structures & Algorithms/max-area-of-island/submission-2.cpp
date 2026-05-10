class Solution {
   public:
    int bfs(int row, int col, vector<vector<int>>& grid, int n, int m) {
        queue<pair<int, int>> q;
        q.push({row, col});
        grid[row][col] = 0;
        int area = 1;
        int drow[4] = {-1, 1, 0, 0};
        int dcol[4] = {0, 0, -1, 1};
        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nr = r + drow[i];
                int nc = c + dcol[i];
                if (nr < n && nc < m && nr >= 0 && nc >= 0 && grid[nr][nc] == 1) {
                    grid[nr][nc] = 0;
                    q.push({nr, nc});
                    area++;
                }
            }
        }
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    // ans = max(ans, dfs(i, j, grid, n, m));
                    ans = max(ans, bfs(i, j, grid, n, m));
                }
            }
        }
        return ans;
    }
};
