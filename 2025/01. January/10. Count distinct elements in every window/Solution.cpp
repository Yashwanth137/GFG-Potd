class Solution 
{
  public:
    vector<int> countDistinct(vector<int> &arr, int k) 
    {
        vector<int> res;
        unordered_map<int, int> freq;
        int unq_cnt = 0;
        
        for(int i=0; i<arr.size(); i++)
        {
            freq[arr[i]]++;
            
            if(freq[arr[i]] == 1)
            {
                unq_cnt++;
            }
            
            if(i >= k)
            {
                freq[arr[i-k]]--;
                if(freq[arr[i-k]] == 0)
                {
                    unq_cnt--;
                }
            }
            
            if(i >= k-1)
            {
                res.push_back(unq_cnt);
            }
        }
        
        return res;
    }
};
