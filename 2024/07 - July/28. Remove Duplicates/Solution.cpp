class Solution 
{
public:
    string removeDups(const std::string& str) 
    {
        string res = "";
        unordered_set<char> seen;
        for (char i : str) 
        {
            if (seen.find(i) == seen.end()) 
            {
                seen.insert(i);
                res += i;
            }
        }
        return res;
    }
};

