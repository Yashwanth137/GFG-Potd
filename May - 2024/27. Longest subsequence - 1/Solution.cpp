class Solution 
{
  public:
    int longestSubseq(int n, vector<int> &a) 
    {
        unordered_map<int,int>res;
        int val = 0;
        for(int i=0; i<n; i++)
        {
            int k = a[i]-1;
            int j = a[i]+1;
            res[a[i]] = 1 + max(res[k], res[j]);
            val = max(val, int(res[a[i]]));
        }
        return val;
    }
};
