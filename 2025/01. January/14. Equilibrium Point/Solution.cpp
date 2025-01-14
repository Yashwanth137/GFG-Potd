class Solution 
{
  public:
    int findEquilibrium(vector<int> &arr) 
    {
        int totalSum = 0, rightSum = arr[arr.size()-1];
        
        for(int num: arr)
        {
            totalSum += num;
        }
        
        for(int i = arr.size()-2; i >=0; i--)
        {
            int leftSum = totalSum - arr[i] - rightSum;
            if(leftSum == rightSum)
            {
                return i;
            }
            rightSum += arr[i];
        }
        
        return -1;
    }
};
