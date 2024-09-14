class Solution 
{
  public:
    void rearrange(vector<int> &arr) 
    {
        queue<int> pos, neg;
        for (int num : arr) 
        {
            if (num >= 0) 
            {
                pos.push(num);
            } 
            else 
            {
                neg.push(num);
            }
        }
        
        int i = 0;
        while (!pos.empty() && !neg.empty()) 
        {
            if (i % 2 == 0) 
            {
                arr[i++] = pos.front();
                pos.pop();
            } 
            else 
            {
                arr[i++] = neg.front();
                neg.pop();
            }
        }
        
        while (!pos.empty()) 
        {
            arr[i++] = pos.front();
            pos.pop();
        }
        
        while (!neg.empty()) 
        {
            arr[i++] = neg.front();
            neg.pop();
        }
    }
};
