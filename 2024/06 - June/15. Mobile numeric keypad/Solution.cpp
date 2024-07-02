class Solution 
{
public:
    long long getCount(int n) 
    {
        if (n == 1) 
            return 10;

        vector<vector<int>> transitions = {
            {0, 8},
            {1, 2, 4},
            {1, 2, 3, 5},
            {2, 3, 6},
            {1, 4, 5, 7},
            {2, 4, 5, 6, 8},
            {3, 5, 6, 9},
            {4, 7, 8},
            {5, 7, 8, 9, 0},
            {6, 8, 9}
        };

        vector<vector<long long>> dp(n + 1, vector<long long>(10, 0));

        for (int j = 0; j < 10; j++) 
            dp[1][j] = 1;

        for (int i = 2; i <= n; i++) 
        {
            for (int j = 0; j < 10; j++) 
            {
                for (int k : transitions[j]) 
                {
                    dp[i][j] += dp[i - 1][k];
                }
            }
        }

        long long result = 0;
        for (int j = 0; j < 10; j++) 
            result += dp[n][j];

        return result;
    }
};
