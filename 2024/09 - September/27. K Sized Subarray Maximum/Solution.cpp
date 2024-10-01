class Solution 
{
public:
    vector<int> max_of_subarrays(int k, vector<int> &arr) 
    {
        vector<int> res;
        deque<int> dq;   
        
        for (int i = 0; i < arr.size(); i++) 
        {
            if (!dq.empty() && dq.front() <= i - k) 
            {
                dq.pop_front();
            }
            
            while (!dq.empty() && arr[dq.back()] <= arr[i]) 
            {
                dq.pop_back();
            }
            
            dq.push_back(i);
            
            if (i >= k - 1) 
            {
                res.push_back(arr[dq.front()]);
            }
        }
        return res;
    }
};