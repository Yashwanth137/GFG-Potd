class Solution 
{
  public:
    int lps(string str) 
    {
        int n = str.length();
        vector<int> lps_array(n, 0);
        
        int len = 0;
        int i = 1;
        
        while (i < n) 
        {
            if (str[i] == str[len]) 
            {
                len++;
                lps_array[i] = len;
                i++;
            } 
            else 
            {
                if (len != 0) 
                {
                    len = lps_array[len - 1];
                } 
                else 
                {
                    lps_array[i] = 0;
                    i++;
                }
            }
        }
        
        return lps_array[n - 1];
    }
};
