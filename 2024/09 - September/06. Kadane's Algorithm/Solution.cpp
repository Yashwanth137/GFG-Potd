class Solution 
{
  public:
    int maxSubarraySum(vector<int> &arr) 
    {
        int res = arr[0];
        int curr_sum = arr[0];
        
        for(int i=1; i<arr.size(); i++)
        {
            curr_sum = max(arr[i], curr_sum + arr[i]);
            res = max(res, curr_sum);
        }
        return res;
    }
};
