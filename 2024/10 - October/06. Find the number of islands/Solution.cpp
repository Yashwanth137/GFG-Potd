class Solution 
{
  public:
    const vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, 
                                               {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
    
    void dfs(vector<vector<char>>& grid, int row, int col, int n, int m) 
    {
        grid[row][col] = '0';
        
        for (auto dir : directions) 
        {
            int newRow = row + dir.first;
            int newCol = col + dir.second;
            
            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && grid[newRow][newCol] == '1') 
            {
                dfs(grid, newRow, newCol, n, m);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) 
    {
        if (grid.empty()) return 0;  
        
        int n = grid.size();         
        int m = grid[0].size();      
        int islandCount = 0;
        
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                if (grid[i][j] == '1') 
                {
                    islandCount++;
                    dfs(grid, i, j, n, m);
                }
            }
        }
        
        return islandCount;
    }
};
