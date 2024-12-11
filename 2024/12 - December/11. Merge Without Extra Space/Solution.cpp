class Solution 
{
public:
    void mergeArrays(vector<int>& a, vector<int>& b) 
    {
        int n = a.size(), m = b.size();
        vector<int> res;
        res.reserve(n + m); 
        
        int i = 0, j = 0;
        while (i < n && j < m) 
        {
            if (a[i] < b[j]) 
            {
                res.push_back(a[i]);
                i++;
            } 
            else 
            {
                res.push_back(b[j]);
                j++;
            }
        }
        
        while (i < n) res.push_back(a[i++]);
        while (j < m) res.push_back(b[j++]);

        for (int k = 0; k < n; ++k) a[k] = res[k];
        for (int k = 0; k < m; ++k) b[k] = res[n + k];
    }
};
