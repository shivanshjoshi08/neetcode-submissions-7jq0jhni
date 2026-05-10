class Solution {
   public:
    int ans = 0;
    void dfs(int row, int col, vector<vector<int>>& grid, int n, int m, int maxArea) {
        if (row >= n || col >= m || row < 0 || col < 0 || grid[row][col] == 0) return;
        maxArea++;
        ans = max(ans, maxArea);
        grid[row][col] = 0;
        dfs(row + 1, col, grid, n, m, maxArea);
        dfs(row - 1, col, grid, n, m, maxArea);
        dfs(row, col + 1, grid, n, m, maxArea);
        dfs(row, col - 1, grid, n, m, maxArea);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    dfs(i,j,grid, n, m, 0);
                }
            }
        }
        return ans;
    }
};
