class Solution
{
	public:
	int findLCS(string str1, string str2) 
	{
        int m = str1.length();
        int n = str2.length();
        
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        
        for (int i = 0; i <= m; i++) 
        {
            for (int j = 0; j <= n; j++) 
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
                else if (str1[i - 1] == str2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        
        return dp[m][n];
    }

    int minOperations(string str1, string str2) 
    {
        int lcsLength = findLCS(str1, str2);
        int deletions = str1.length() - lcsLength;
        int insertions = str2.length() - lcsLength;
        
        return deletions + insertions;
    }
};
