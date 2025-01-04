class Solution 
{
  public:
    int countTriplets(vector<int> &nums, int target) 
    {
        int size = nums.size();
        int tripletCount = 0;
        
        for (int first = 0; first < size - 2; ++first) 
        {
            int second = first + 1, third = size - 1;
            
            while (second < third) 
            {
                int currentSum = nums[first] + nums[second] + nums[third];
                
                if (currentSum < target) 
                {
                    ++second;
                } 
                else if (currentSum > target) 
                {
                    --third;
                } 
                else 
                {
                    if (nums[second] == nums[third]) 
                    {
                        int combinations = third - second + 1;
                        tripletCount += (combinations * (combinations - 1)) / 2;
                        break;
                    } 
                    else 
                    {
                        int secondCount = 1, thirdCount = 1;
                        
                        while (second + 1 < third && nums[second] == nums[second + 1]) 
                        {
                            ++second;
                            ++secondCount;
                        }
                        while (third - 1 > second && nums[third] == nums[third - 1]) 
                        {
                            --third;
                            ++thirdCount;
                        }
                        
                        tripletCount += secondCount * thirdCount;
                        ++second;
                        --third;
                    }
                }
            }
        }
        
        return tripletCount;
    }
};
