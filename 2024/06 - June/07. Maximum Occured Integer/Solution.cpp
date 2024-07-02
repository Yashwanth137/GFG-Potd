class Solution 
{
  public:
  int maxOccured(int n, int l[], int r[], int maxx) 
  {
        int res[maxx+2]={0};
        int ans=-1,val=-1e9;
        for(int i=0;i<n;i++)
        {
            res[l[i]]++;
            res[r[i]+1]--;
        }
        for(int i=1;i<=maxx;i++)
        {
            res[i]+=res[i-1];
            if(res[i]>val)
            {
                val=res[i];
                ans=i;
            }
        }
        return ans;
    }
};
