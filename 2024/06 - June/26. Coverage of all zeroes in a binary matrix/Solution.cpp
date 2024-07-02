class Solution 
{
  public:
    int findCoverage(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int temp1[] = {1,0,0,-1}, temp2[] = {0,-1,1,0};
        int res = 0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    for(int k=0; k<4; k++)
                    {
                        int val1 = i + temp1[k];
                        int val2 = j + temp2[k];
                        if(val1 >= 0 && val1 < m && val2 >= 0 && val2 < n && matrix[val1][val2] == 1)
                        {
                            res++;
                        }
                    }
                }
            }
        }
        return res;
    }
};
