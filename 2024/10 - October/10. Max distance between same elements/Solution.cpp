class Solution 
{
  public:
    int maxDistance(vector<int> &arr) 
    {
        unordered_map<int, int> res;
        int max_d = 0;
        
        for(int i=0; i<arr.size(); i++)
        {
            int num = arr[i];
            
            if(res.find(num) != res.end())
            {
                int d = i - res[num];
                max_d = max(max_d, d);
            }
            else
            {
                res[num] = i;
            }
        }
        
        return max_d;
    }
};
