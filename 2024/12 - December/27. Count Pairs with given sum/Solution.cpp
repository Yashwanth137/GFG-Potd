class Solution 
{
  public:
    int countPairs(vector<int> &arr, int target) 
    {
        unordered_map<int, int> freq;
        int res = 0;
        
        for(int num: arr)
        {
            int diff = target - num;
            if(freq.find(diff) != freq.end())
            {
                res += freq[diff];
            }
            freq[num]++;
        }
        
        return res;
    }
};
