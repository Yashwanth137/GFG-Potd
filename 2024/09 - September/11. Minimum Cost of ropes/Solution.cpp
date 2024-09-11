class Solution 
{
public:
    long long minCost(vector<long long>& arr) 
    {
        priority_queue<long long, vector<long long>, greater<long long>> minHeap;
        
        for (long long rope : arr) 
        {
            minHeap.push(rope);
        }
        
        long long totalCost = 0;
        
        while (minHeap.size() > 1) 
        {
            long long first = minHeap.top();
            minHeap.pop();
            long long second = minHeap.top();
            minHeap.pop();
            
            long long cost = first + second;
            totalCost += cost;
            
            minHeap.push(cost);
        }
        return totalCost;
    }
};
