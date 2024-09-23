class Solution 
{
  public:
    vector<int> findTwoElement(vector<int>& arr) 
    {
        int n = arr.size();
        int xor_all = 0;
        int xor_missing_repeated = 0;
        
        for (int i = 0; i < n; i++) 
        {
            xor_all ^= arr[i];
        }
        for (int i = 1; i <= n; i++) 
        {
            xor_all ^= i;
        }
        
        int set_bit = xor_all & ~(xor_all - 1);
        
        int x = 0, y = 0;
        for (int i = 0; i < n; i++) 
        {
            if (arr[i] & set_bit) 
            {
                x ^= arr[i];
            } 
            else 
            {
                y ^= arr[i];
            }
        }
        for (int i = 1; i <= n; i++) 
        {
            if (i & set_bit) 
            {
                x ^= i;
            } 
            else 
            {
                y ^= i;
            }
        }
        
        int repeat = 0, missing = 0;
        for (int i = 0; i < n; i++) 
        {
            if (arr[i] == x) 
            {
                repeat = x;
                missing = y;
                break;
            } 
            else if (arr[i] == y) 
            {
                repeat = y;
                missing = x;
                break;
            }
        }
        
        return {repeat, missing};
    }
};
