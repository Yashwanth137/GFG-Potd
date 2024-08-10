class Solution 
{
public:
    int Maximize(std::vector<int> &arr) 
    {
        long long res = 0;
        int mod = 1000000007;
        
        sort(arr.begin(), arr.end()); 
        
        for(int i = 0; i < arr.size(); i++)
        {
            res += (long long)arr[i] * i;
        }
        
        return res % mod;
    }
};
