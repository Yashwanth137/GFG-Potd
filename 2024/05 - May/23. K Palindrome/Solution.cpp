class Solution 
{
public:
    bool isPalindrome(string str, int n, int k) 
    {
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= n; ++i) 
        {
            for (int j = 1; j <= n; ++j) 
            {
                if (str[i - 1] == str[n - j]) 
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } 
                else 
                {
                    dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return n - dp[n][n] <= k;
    }

    int kPalindrome(string str, int n, int k)
    {
        if(isPalindrome(str,n,k))
            return 1;
        return 0;
    }
};
