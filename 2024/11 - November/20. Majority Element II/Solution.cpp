class Solution 
{
  public:
    vector<int> findMajority(vector<int>& arr) 
    {
        int limit = arr.size()/3;
        vector<int> res;
        unordered_map<int, int> freq;
        
        for(int num: arr)
        {
            freq[num]++; 
        }
        
        for (auto it = freq.begin(); it != freq.end(); ++it)
        {
            if (it->second > limit)
            {
                res.push_back(it->first);
            }
        }
        
        sort(res.begin(), res.end());
        return res;
    }
};
