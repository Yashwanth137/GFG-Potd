class Solution 
{
  public:
    int findSwapValues(int a[], int n, int b[], int m) 
    {
        set<int>res;
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0 ; i < n ; i++ )
        {
            sum1 += a[i];
            res.insert(a[i]);
        }
        
        for(int i = 0 ; i < m ; i++ )
        {
            sum2 += b[i];
        }
        
        
        if((sum2-sum1)%2 != 0) return -1;

        
        for(int i = 0 ; i < m ; i++ )
        {
            if(res.find((sum1-sum2)/2+b[i]) != res.end())
            {
                return 1; 
            }
        }
        return -1;
    }
};
