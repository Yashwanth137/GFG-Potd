class Solution 
{
  public:
    int hIndex(vector<int>& citations) 
    {
        int res = 0;
        
        sort(citations.begin(), citations.end(), greater<int>());
        
        for(int i=0; i<citations.size(); i++)
        {
            if(citations[i] >= i+1)
            {
                res = i+1;
            }
            else
            {
                break;
            }
        }
        
        return res;
    }
};
