class Solution 
{
  public:
    int maxLength(string& str) 
    {
        stack<int> st;
        st.push(-1);
        int maxLength = 0;
        
        for (int i = 0; i < str.length(); i++) 
        {
            if (str[i] == '(') 
            {
                st.push(i);
            } 
            else 
            {
                st.pop();
                if (!st.empty()) 
                {
                    maxLength = max(maxLength, i - st.top());
                } 
                else 
                {
                    st.push(i);
                }
            }
        }
        return maxLength;
    }
};
