class Solution 
{
  public:
    int maxWater(vector<int> &arr) 
    {
        int left = 0, right = arr.size() - 1, res = 0, area = 0;
        
        while(left < right)
        {
            area = (right - left) * min(arr[left], arr[right]);
            
            res = max(res, area);
            
            if(arr[left] <= arr[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        
        return res;
    }
};
