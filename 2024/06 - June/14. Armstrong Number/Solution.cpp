class Solution 
{
  public:
    string armstrongNumber(int n) 
    {
        int res = 0, num = n;
        int len = to_string(n).length();
        while(n > 0)
        {
            res += pow((n%10), len);
            n = n/10;
        }
        if(res == num)
            return "true";
        return "false";
    }
};
