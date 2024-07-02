class Solution 
{
  public:
    void dosort(int n, char arr[])
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(int(arr[i]) < int(arr[j]))
                {
                    char temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }
    
    void matchPairs(int n, char nuts[], char bolts[]) 
    {
        dosort(n, nuts);
        dosort(n, bolts);
    }
};
