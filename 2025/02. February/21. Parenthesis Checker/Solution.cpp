class Solution 
{
  public:
    bool isBalanced(string& s) 
    {
        stack<char> stk;
        unordered_map<char, char> brackets = {{')','('}, {']','['}, {'}', '{'}};
        
        for(char ch: s)
        {
            if(ch == '(' || ch == '[' || ch == '{')
            {
                stk.push(ch);
            }
            else if(brackets.count(ch))
            {
                if(stk.empty() || stk.top() != brackets[ch])
                {
                    return false;
                }
                stk.pop();
            }
        }
        
        return stk.empty();
    }
};
