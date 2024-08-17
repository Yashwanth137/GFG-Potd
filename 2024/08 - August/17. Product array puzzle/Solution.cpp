class Solution 
{
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums) 
    {
        int n = nums.size();
        vector<long long int> res(n, 1);
        vector<long long int> prefix(n, 1);
        vector<long long int> suffix(n, 1);
        
        for (int i = 1; i < n; i++) 
        {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }
        
        for (int i = n - 2; i >= 0; i--) 
        {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }
        
        for (int i = 0; i < n; i++) 
        {
            res[i] = prefix[i] * suffix[i];
        }

        return res;
    }
};
