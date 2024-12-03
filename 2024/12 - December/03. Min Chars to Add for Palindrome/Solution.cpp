class Solution 
{
  public:
    int minChar(string& s) 
    {
        string rev_s = string(s.rbegin(), s.rend());
        string concat = s + "#" + rev_s;
        int n = concat.size();
        vector<int> lps(n, 0);

        for (int i = 1; i < n; i++) 
        {
            int j = lps[i - 1];
            while (j > 0 && concat[i] != concat[j]) 
            {
                j = lps[j - 1];
            }
            if (concat[i] == concat[j]) 
            {
                j++;
            }
            lps[i] = j;
        }
        return s.size() - lps.back();
    }
};
