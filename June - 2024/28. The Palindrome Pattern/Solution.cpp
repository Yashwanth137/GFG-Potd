class Solution 
{
  public:
    string pattern(vector<vector<int>> &arr) 
    {
        int n = arr.size();
        for(int i=0; i<n; i++)
        {
            bool flag = true;
            for(int j=0; j<n/2; j++)
            {
                if(arr[i][j] != arr[i][n-j-1])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                return to_string(i) + " R";
        }
            
        for(int i=0; i<n; i++)
        {
            bool flag = true;
            for(int j=0; j<n/2; j++)
            {
                if(arr[j][i] != arr[n-j-1][i])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                return to_string(i) + " C";
        }
        
        return "-1";
    }
};
