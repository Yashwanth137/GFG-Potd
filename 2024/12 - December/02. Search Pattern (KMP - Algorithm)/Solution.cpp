class Solution 
{
public:
    vector<int> search(string& pat, string& txt) 
    {
        vector<int> res;
        int n1 = txt.size();
        int n2 = pat.size();
        vector<int> lps = computeLPS(pat);

        int i = 0, j = 0;
        while (i < n1) 
        {
            if (txt[i] == pat[j]) 
            {
                i++;
                j++;
            }
            if (j == n2) 
            {
                res.push_back(i - j);
                j = lps[j - 1];
            } 
            else if (i < n1 && txt[i] != pat[j]) 
            {
                if (j != 0) 
                {
                    j = lps[j - 1];
                } 
                else 
                {
                    i++;
                }
            }
        }
        
        return res;
    }

private:
    vector<int> computeLPS(string& pat) 
    {
        int n = pat.size();
        vector<int> lps(n, 0);
        int len = 0, i = 1;

        while (i < n) 
        {
            if (pat[i] == pat[len]) 
            {
                len++;
                lps[i] = len;
                i++;
            } 
            else 
            {
                if (len != 0) 
                {
                    len = lps[len - 1];
                } 
                else 
                {
                    lps[i] = 0;
                    i++;
                }
            }
        }
        
        return lps;
    }
};
