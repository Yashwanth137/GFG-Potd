class Solution 
{
  private:
    stack<int> s;
    stack<int> minStack;
    
  public:
    Solution() {}

    void push(int x) 
    {
        s.push(x);
        if(minStack.empty() || x <= minStack.top())
        {
            minStack.push(x);
        }
    }

    void pop() 
    {
        if(!s.empty())
        {
            if(s.top() == minStack.top())
            {
                minStack.pop();
            }
            s.pop();
        }
    }

    int peek() 
    {
        return s.empty() ? -1 : s.top();
    }

    int getMin() 
    {
        return minStack.empty() ? -1 : minStack.top();
    }
};
