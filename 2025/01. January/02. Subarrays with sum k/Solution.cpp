class Solution 
{
  public:
    int countSubarrays(vector<int> &arr, int k) 
    {
        unordered_map<int, int> prefixMap;
        prefixMap[0] = 1;
        int res = 0, prefixSum = 0;
        
        for(int num: arr)
        {
            prefixSum += num;
            
            if(prefixMap.find(prefixSum - k) != prefixMap.end())
            {
                res += prefixMap[prefixSum - k];
            }
            
            prefixMap[prefixSum]++;
        }
        
        return res;
    }
};
