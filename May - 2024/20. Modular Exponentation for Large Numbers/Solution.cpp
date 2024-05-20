class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    long long res = 1;
		    x = x % M;
		    while(n > 0)
		    {
		        if(n % 2 == 1)
		        {
		            res = (res * x) % M;
		        }
		        n = n >> 1;
		        x = (x * x) % M;
		    }
		    return res;
		}
};
