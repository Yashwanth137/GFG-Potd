class Solution 
{
  public:
    int totalCount(int k, vector<int>& arr) 
    {
        int totalParts = 0;
    
        for (int num : arr) 
        {
            totalParts += (num + k - 1) / k;
        }
    
        return totalParts;
    }
};
