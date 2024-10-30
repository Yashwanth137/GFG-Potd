class Solution 
{
  public:
    int countPairsWithDiffK(vector<int>& arr, int k) 
    {
        unordered_map<int, int> freq;
        int res = 0;
        
        for (int num : arr)
        {
            freq[num]++;
        }
        
        for (auto it = freq.begin(); it != freq.end(); ++it)
        {
            int num = it->first;
            int count = it->second;

            if (k > 0 && freq.count(num + k)) 
            {
                res += count * freq[num + k];
            } 
            else if (k == 0) 
            {
                res += (count * (count - 1)) / 2;
            }
        }
        
        return res;
    }
};
