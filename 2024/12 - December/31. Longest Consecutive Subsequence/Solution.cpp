class Solution 
{
  public:
    int longestConsecutive(vector<int>& arr) 
    {
        int len = 1, max_l = INT_MIN;
        
        sort(arr.begin(), arr.end());
        
        for(int i=0; i<arr.size()-1; i++)
        {
            if(arr[i+1] - arr[i] == 1)
            {
                len++;
            }
            else if(arr[i+1] != arr[i])
            {
                len = 1;
            }
            max_l = max(len, max_l);
        }
        
        return max_l;
    }
};
