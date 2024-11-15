class Solution 
{
  public:
    int getSecondLargest(vector<int> &arr) 
    {
        sort(arr.begin(), arr.end());
        
        for(int i=arr.size()-1; i>0; i--)
        {
            if(arr[i-1] < arr[i])
            {
                return arr[i-1];
            }
        }
        
        return -1;
    }
};
