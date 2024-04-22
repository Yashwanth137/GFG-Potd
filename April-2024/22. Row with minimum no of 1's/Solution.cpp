class Solution {
public:
    int minRow(int n, int m, vector<vector<int>>& a) 
    {
        int count = m, row = 0;
        for (int i = 0; i < n; i++) 
        {
            int res = 0; 
            for (int j = 0; j < m; j++) 
            {
                if (a[i][j] == 1) 
                {
                    res++;
                }
            }
            if (res < count) 
            {
                count = res;
                row = i;
            }
        }
        return row + 1;
    }
};
