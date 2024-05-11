class Solution 
{
  public:
    vector<long long> jugglerSequence(long long n) 
    {
        vector<long long> res;
        while(n != 1)
        {
            res.push_back(n);
            if(n % 2 == 0)
            {
                n = pow(n, 0.5);
            }
            else
            {
                n = pow(pow(n,3),0.5);
            }
        }
        res.push_back(n);
        return res;
    }
};
