class Solution 
{
public:
    int findMaxDiff(vector<int>& arr) 
    {
        int n = arr.size();
        vector<int> leftMin(n), rightMin(n);
        
        stack<int> s;
        s.push(0);  
        for (int i = 0; i < n; ++i) 
        {
            while (s.top() >= arr[i]) 
            {
                s.pop();
            }
            leftMin[i] = s.top();
            s.push(arr[i]);
        }
        
        while (!s.empty()) s.pop();
        
        s.push(0);  
        for (int i = n - 1; i >= 0; --i) 
        {
            while (s.top() >= arr[i]) 
            {
                s.pop();
            }
            rightMin[i] = s.top();
            s.push(arr[i]);
        }
        
        int maxDiff = 0;
        for (int i = 0; i < n; ++i) 
        {
            maxDiff = max(maxDiff, abs(leftMin[i] - rightMin[i]));
        }
        return maxDiff;
    }
};
