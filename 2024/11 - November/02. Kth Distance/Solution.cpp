class Solution 
{
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) 
    {
        unordered_map<int, int> index_map;
        
        for(int i=0; i<arr.size(); i++)
        {
            if(index_map.find(arr[i]) != index_map.end())
            {
                int last_index = index_map[arr[i]];
                
                if(i - last_index <= k)
                {
                    return true;
                }
            }
            index_map[arr[i]] = i;
        }
        
        return false;
    }
};
