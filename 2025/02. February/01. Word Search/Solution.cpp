class Solution 
{
  public:
    bool dfs(vector<vector<char>>& mat, int i, int j, string& word, int index, vector<vector<bool>>& visited) 
    {
        if (index == word.size()) return true;  
        int n = mat.size(), m = mat[0].size();
        
        if (i < 0 || j < 0 || i >= n || j >= m || visited[i][j] || mat[i][j] != word[index]) 
            return false; 
            
        visited[i][j] = true; 
        
        if (dfs(mat, i + 1, j, word, index + 1, visited) ||
            dfs(mat, i - 1, j, word, index + 1, visited) ||
            dfs(mat, i, j + 1, word, index + 1, visited) ||
            dfs(mat, i, j - 1, word, index + 1, visited)) 
        {
            return true;
        }
        
        visited[i][j] = false; 
        return false;
    }

    bool isWordExist(vector<vector<char>>& mat, string& word) 
    {
        int n = mat.size(), m = mat[0].size();
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                if (mat[i][j] == word[0]) 
                {
                    if (dfs(mat, i, j, word, 0, visited))
                        return true;
                }
            }
        }
        return false;
    }
};
