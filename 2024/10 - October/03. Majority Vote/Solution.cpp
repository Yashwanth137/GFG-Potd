class Solution 
{
  public:
    vector<int> findMajority(vector<int>& nums) 
    {
        int one_third = nums.size() / 3;
        map<int, int> freq_map;
        vector<int> res;
        
        for(int num: nums)
        {
            freq_map[num]++;
        }
        
        for(const auto& pair: freq_map)
        {
            if(pair.second > one_third)
            {
                res.push_back(pair.first);
            }
        }
        
        if(res.empty()) return {-1};
        
        sort(res.begin(), res.end());
        
        return res;
    }
};
