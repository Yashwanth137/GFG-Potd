class Solution 
{
public:
    int countgroup(vector<int>& arr) 
    {
        const int MOD = 1000000007;
        int n = arr.size();
        
        int totalXor = 0;
        for (int num : arr) 
        {
            totalXor ^= num;
        }
        
        if (totalXor != 0) 
        {
            return 0;
        }
        
        long long result = 1;
        for (int i = 0; i < n - 1; i++) 
        {
            result = (result * 2) % MOD;
        }
        
        result = (result - 1 + MOD) % MOD;
        
        return (int)result;
    }
};
