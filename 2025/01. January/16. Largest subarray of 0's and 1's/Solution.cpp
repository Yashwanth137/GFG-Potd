class Solution 
{
  public:
    int maxLen(vector<int> &arr) 
    {
        unordered_map<int, int> prefix_map;
        int prefix_sum = 0, max_length = 0;
        prefix_map[0] = -1;
        for (int i = 0; i < arr.size(); ++i) 
        {
            prefix_sum += (arr[i] == 0 ? -1 : 1);
            if (prefix_map.find(prefix_sum) != prefix_map.end()) 
            {
                max_length = max(max_length, i - prefix_map[prefix_sum]);
            } 
            else 
            {
                prefix_map[prefix_sum] = i;
            }
        }
        return max_length;
    }
};
