class Solution 
{
public:
    int wildCard(string pattern, string str) 
    {
        int n = pattern.size();  
        int m = str.size();      

        vector<int> dp(m + 1, 0), prev(m + 1, 0);
        dp[0] = 1; 
        
        for (int i = 0; i < n; ++i) 
        {
            prev.swap(dp);  
            if (pattern[i] == '*') 
            {
                dp[0] = prev[0];  
                for (int j = 1; j <= m; ++j) 
                {
                    dp[j] = dp[j - 1] || prev[j]; 
                }
            } 
            else 
            {
                dp[0] = 0;  
                for (int j = 1; j <= m; ++j) 
                {
                    if (pattern[i] == '?' || pattern[i] == str[j - 1]) 
                    {
                        dp[j] = prev[j - 1];
                    } 
                    else 
                    {
                        dp[j] = 0;
                    }
                }
            }
        }
        return dp[m];
    }
};
