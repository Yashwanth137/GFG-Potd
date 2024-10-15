class Solution 
{
  public:
    int subArraySum(vector<int>& arr, int tar) 
    {
        unordered_map<int, int> prefix_sums; 
        prefix_sums[0] = 1; 
        
        int curr_sum = 0; 
        int res = 0; 

        for (int num : arr) 
        {
            curr_sum += num; 
            if (prefix_sums.find(curr_sum - tar) != prefix_sums.end()) 
            {
                res += prefix_sums[curr_sum - tar]; 
            }
            
            prefix_sums[curr_sum]++;
        }
        
        return res;
    }
};
