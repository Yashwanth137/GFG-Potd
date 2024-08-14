class Solution 
{
  public:
    int longestCommonSubstr(string str1, string str2) 
    {
        int m = str1.size();
        int n = str2.size();
        vector<vector<int>> res(m + 1, vector<int>(n + 1, 0));
        int maxLength = 0;
    
        for (int i = 1; i <= m; ++i) 
        {
            for (int j = 1; j <= n; ++j) 
            {
                if (str1[i - 1] == str2[j - 1]) 
                {
                    res[i][j] = res[i - 1][j - 1] + 1;
                    maxLength = max(maxLength, res[i][j]);
                } 
                else 
                {
                    res[i][j] = 0;
                }
            }
        }
        return maxLength;
    }
};
