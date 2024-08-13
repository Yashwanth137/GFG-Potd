class Solution 
{
  public:
    long long int floorSqrt(long long int n) 
    {
        long long res = sqrt(n);
        if (res % n != 0)
        {
            return floor(res);
        }
        else
        {
            return res;
        }
    }
};
