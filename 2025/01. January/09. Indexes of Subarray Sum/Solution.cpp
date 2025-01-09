class Solution 
{
  public:
    vector<int> subarraySum(vector<int> &arr, int target) 
    {
        int left = 0, currSum = 0;
        
        for(int right = 0; right < arr.size(); right++)
        {
            currSum += arr[right];
            
            while(currSum > target && left <= right)
            {
                currSum -= arr[left];
                left++;
            }
            
            if(currSum == target)
            {
                return {left + 1, right + 1};
            }
        }
        
        return {-1};
    }
};
