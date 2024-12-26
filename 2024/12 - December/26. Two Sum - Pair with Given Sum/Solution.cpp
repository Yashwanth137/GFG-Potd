class Solution 
{
  public:
    bool twoSum(vector<int>& arr, int target) 
    {
        unordered_map<int, int> seen;
        
        for(int num: arr)
        {
            int temp = target - num;
            if(seen.find(temp) != seen.end())
            {
                return true;
            }
            seen[num] = 1;
        }
        
        return false;
    }
};
