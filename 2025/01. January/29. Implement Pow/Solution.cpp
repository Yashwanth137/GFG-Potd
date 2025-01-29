class Solution 
{
  public:
    double power(double b, int e) 
    {
        if(e == 0) return 1;
        
        double res = 1;
        long long val = e;
        
        if(val < 0)
        {
            b = 1/b;
            val = -val;
        }
        
        while(val > 0)
        {
            if(val % 2 == 1)
            {
                res *= b;
            }
            b *= b;
            val /= 2;
        }
        
        return res;
    }
};
