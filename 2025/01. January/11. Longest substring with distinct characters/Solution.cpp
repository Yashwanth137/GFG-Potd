class Solution 
{
  public:
    int longestUniqueSubstr(string &s) 
    {
        int res = 0, start = 0;
        unordered_map<char, int> char_index;
        
        for(int end=0; end<s.length(); end++)
        {
            char curr = s[end];
            
            if(char_index.find(curr) != char_index.end())
            {
                start = max(start, char_index[curr]+1);
            }
            
            char_index[curr] = end;
            res = max(res, end - start + 1);
        }
        
        return res;
    }
};
