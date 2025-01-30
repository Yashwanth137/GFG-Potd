
class Solution 
{
public:
    vector<vector<int>> nQueen(int n) 
    {
        vector<vector<int>> results;
        vector<int> board(n, -1);  
        solveNQueens(0, board, n, results);
        
        for (auto& solution : results) 
        {
            for (auto& row : solution) 
                row += 1;  
        }
        return results;
    }
    
private:
    void solveNQueens(int col, vector<int>& board, int n, vector<vector<int>>& results) 
    {
        if (col == n) 
        {
            results.push_back(board); 
            return;
        }
        
        for (int row = 0; row < n; ++row) 
        {
            if (isSafe(board, col, row, n)) 
            {
                board[col] = row;  
                solveNQueens(col + 1, board, n, results); 
                board[col] = -1; 
            }
        }
    }
    
    bool isSafe(const vector<int>& board, int col, int row, int n) 
    {
        for (int i = 0; i < col; ++i) 
        {
            if (board[i] == row || abs(board[i] - row) == abs(i - col)) 
                return false;
        }
        return true;
    }
};
