class Solution 
{
    public:
    vector<string> findPermutation(string &s) 
    {
        vector<string> res;
        sort(s.begin(), s.end());
        backtrack(s, 0, res);
        
        return res;
        
    }
    
    private:
    void backtrack(string &s, int indx, vector<string> &res)
    {
        if(indx == s.size())
        {
            res.push_back(s);
            return;
        }
        
        unordered_set<char> seen;
        for(int i=indx; i<s.size(); i++)
        {
            if(seen.count(s[i])) continue;
            seen.insert(s[i]);
            
            swap(s[indx], s[i]);
            backtrack(s, indx + 1, res);
            swap(s[indx], s[i]);
        }
    }
};
