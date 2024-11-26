class Solution 
{
  public:
    int circularSubarraySum(vector<int> &nums) 
    {
        const int maxValue = 1 << 30;
        int minPrefix = 0, maxPrefix = -maxValue;
        int maxSum = -maxValue, totalSum = 0, minValue = maxValue;
        for (int val : nums) 
        {
            totalSum += val;
            maxSum = max(maxSum, totalSum - minPrefix);
            minValue = min(minValue, totalSum - maxPrefix);
            minPrefix = min(minPrefix, totalSum);
            maxPrefix = max(maxPrefix, totalSum);
        }
        return max(maxSum, totalSum - minValue);
    }
};
