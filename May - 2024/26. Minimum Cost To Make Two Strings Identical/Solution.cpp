class Solution 
{
    public:
        int findMinCost(string x, string y, int costX, int costY) 
        {
            int n = x.size(), m = y.size();
            vector<vector<int>> res(n + 1, vector<int>(m + 1));
            
            for(int i = 1; i <= n; i++) 
            {
                for(int j = 1; j <= m; j++) 
                {
                    if(x[i - 1] == y[j - 1])
                        res[i][j] = 1 + res[i - 1][j - 1];
                    else
                        res[i][j] = max(res[i - 1][j], res[i][j - 1]);
                }
            }
            
            int val = res[n][m];
            int xcost = (n - val) * costX;
            int ycost = (m - val) * costY;
            
            return xcost + ycost;
        }
};
