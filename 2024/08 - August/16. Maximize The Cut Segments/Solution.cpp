class Solution
{
public:
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int> res(n + 1, -1);
        res[0] = 0; 
        
        for (int i = 1; i <= n; ++i)
        {
            if (i >= x && res[i - x] != -1)
                res[i] = max(res[i], res[i - x] + 1);
            if (i >= y && res[i - y] != -1)
                res[i] = max(res[i], res[i - y] + 1);
            if (i >= z && res[i - z] != -1)
                res[i] = max(res[i], res[i - z] + 1);
        }
        
        return res[n] == -1 ? 0 : res[n];
    }
};
