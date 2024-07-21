class Solution 
{
  public:
    long long int findMaxProduct(vector<int>& arr) 
    {
        long long int mod = 1000000007;
        int zero = 0, pos = 0, neg = 0, maxNeg = INT_MIN; 
        long long int posPro = 1, negPro = 1;
        
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] == 0)
            {
                zero = 1;
            }
            else if(arr[i] < 0)
            {
                neg++;
                negPro = (negPro*arr[i])%mod;
                maxNeg = max(maxNeg, arr[i]);
            }
            else
            {
                pos = 1;
                posPro =(posPro*arr[i])%mod;
            }
        }
        
        if(pos == 0 && neg <= 1 && zero == 1) return 0;
        if(pos==1)
        {
            if(neg%2 == 0)
            { 
                posPro = (posPro*negPro)%mod;
            }
            else if(neg%2!=0)
            {
                posPro = (posPro*negPro/maxNeg)%mod ; 
            }
            return posPro%mod;
        }
        if(pos==0 && neg > 1)
        {
             if(neg%2!=0)
             {
                negPro = (negPro/maxNeg)%mod ;
            }
            return negPro%mod;
        }
        return -1;
    }
};
