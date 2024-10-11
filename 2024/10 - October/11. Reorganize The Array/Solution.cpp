class Solution 
{
  public:
    vector<int> rearrange(const vector<int>& arr) 
    {
        vector<int> res = arr;  
        unordered_set<int> nums(arr.begin(), arr.end());
        
        for(int i = 0; i < res.size(); i++)
        {
            if(nums.find(i) != nums.end())
            {
                res[i] = i;
            }
            else
            {
                res[i] = -1;
            }
        }
        
        return res;  
    }
};
