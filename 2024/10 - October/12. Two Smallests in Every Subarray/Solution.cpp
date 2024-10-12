class Solution 
{
  public:
    int pairWithMaxSum(vector<int>& arr) 
    {
        int n = arr.size();
        if (n < 2) return -1; 
        
        int maxSum = -1;
        
        for (int i = 0; i < n - 1; ++i) 
        {
            int currentSum = arr[i] + arr[i + 1]; 
            maxSum = max(maxSum, currentSum);     
        }
        
        return maxSum;
    }    
};
