class Solution 
{
  public:
    vector<int> kLargest(vector<int>& arr, int k) 
    {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        for(int num : arr) 
        {
            minHeap.push(num);
            if(minHeap.size() > k) 
            {
                minHeap.pop();
            }
        }
        
        vector<int> res;
        while(!minHeap.empty()) 
        {
            res.push_back(minHeap.top());
            minHeap.pop();
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};
