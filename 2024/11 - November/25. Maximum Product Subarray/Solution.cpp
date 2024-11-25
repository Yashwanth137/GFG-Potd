class Solution 
{
  public:
    int maxProduct(vector<int> &arr) 
    {
        int n = arr.size();
        
        if(n == 0) return 0;
        
        int curr_min = arr[0], curr_max = arr[0], max_prod = arr[0];
        
        for(int i=1; i<n; i++)
        {
            if(arr[i] < 0)
            {
                swap(curr_max, curr_min);
            }
            
            curr_min = min(arr[i], arr[i] * curr_min);
            curr_max = max(arr[i], arr[i] * curr_max);
            
            max_prod = max(max_prod, curr_max);
        }
        
        return max_prod;
    }
};
