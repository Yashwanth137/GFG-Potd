class Solution 
{
  public:
    bool canSplit(vector<int>& arr) 
    {
        int total_sum = 0;
        for(int num: arr)
        {
            total_sum += num;
        }
        
        if(total_sum % 2 != 0) return false;
        
        int half_sum = total_sum / 2;
        int prefix_sum = 0;
        
        for(int num: arr)
        {
            prefix_sum += num;
            if(prefix_sum == half_sum)
            {
                return true;
            }
        }
        
        return false;
    }
};
