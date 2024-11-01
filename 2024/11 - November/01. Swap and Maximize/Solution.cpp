class Solution 
{
public:
    long long maxSum(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        
        long long maxSum = 0;
        int n = arr.size();
        
        for (int i = 0; i < n / 2; i++) 
        {
            maxSum += abs(arr[i] - arr[n - i - 1]) * 2;
        }
        
        return maxSum;
    }
};
