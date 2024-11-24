class Solution 
{
  public:
    int maxSubarraySum(vector<int> &arr) 
    {
        int localSum = 0, globalSum = INT_MIN;
        
        for(int i=0; i<arr.size(); i++)
        {
            localSum = max(arr[i], arr[i] + localSum);
            globalSum = max(localSum, globalSum);
        }
        
        return globalSum;
    }
};
