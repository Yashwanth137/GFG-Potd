class Solution 
{
  public:
    int myAtoi(char *s) 
    {
        long res = 0;
        int sign = 1, i=0;
        
        while(s[i] == ' ')
        {
            i++;
        }
        
        if(s[i] == '-' || s[i] == '+')
        {
            sign = (s[i] == '-') ? -1: 1;
            i++;
        }
        
        while(isdigit(s[i]))
        {
            res = res * 10 + (s[i] - '0');
            
            if (res * sign > INT_MAX) 
            {
                return INT_MAX;
            } 
            else if (res * sign < INT_MIN) 
            {
                return INT_MIN;
            }
            
            i++;
        }
        
        return res*sign;
    }
};
