class Solution 
{
public:
    long subarrayXor(vector<int> &arr, int k) 
    {
        unordered_map<int, int> freq;
        int xorSum = 0;
        long res = 0;
        
        for (int num : arr) 
        {
            xorSum ^= num;
            
            if (xorSum == k) 
                res++;
                
            if (freq.find(xorSum ^ k) != freq.end()) 
                res += freq[xorSum ^ k];
                
            freq[xorSum]++;
        }
        
        return res;
    }
};
