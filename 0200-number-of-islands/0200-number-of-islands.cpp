class Solution {
public:
    void dfs(int i, int j, vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        // FIX 1: Changed 'j > m' to 'j >= m' to prevent out-of-bounds errors
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '0') {
            return;
        }
        
        // FIX 2: Mark the current cell as '0' (visited) to prevent infinite loops
        grid[i][j] = '0';
        
        // Explore all 4 adjacent directions
        dfs(i + 1, j, grid);
        dfs(i - 1, j, grid);
        dfs(i, j + 1, grid);
        dfs(i, j - 1, grid);
    }

    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {
                    count++;
                    dfs(i, j, grid); // Destroys/sinks the connected island
                }
            }
        }
        return count;
    }
};
