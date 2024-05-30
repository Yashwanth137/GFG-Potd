class Solution 
{
  public:
    int mod=1e9+7;
    int countWays(string s1, string s2) 
    {
        int n1=s1.size();
        int n2=s2.size();
        vector<vector<int>> res(n1+1,vector<int>(n2+1,0));
        
        for(int i=0;i<=n1;i++)
        res[i][0]=1;
        for(int i=1;i<=n1;i++)
        {
            for(int j=1;j<=n2;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    res[i][j]=res[i-1][j-1];
                }
                res[i][j]+=res[i-1][j];
                res[i][j]%=mod;
            }
        }
        return res[n1][n2];
    }
};
