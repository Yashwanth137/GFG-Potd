class Solution 
{
public:
    int minimizeCost(int k, vector<int>& arr) 
    {
        int n = arr.size();
        vector<int> dp(n, INT_MAX);  
        dp[0] = 0; 
        
        for (int i = 1; i < n; ++i) 
        {
            for (int j = i - 1; j >= max(0, i - k); --j) 
            {
                dp[i] = min(dp[i], dp[j] + abs(arr[i] - arr[j]));
            }
        }
        
        return dp[n - 1];
    }
};
