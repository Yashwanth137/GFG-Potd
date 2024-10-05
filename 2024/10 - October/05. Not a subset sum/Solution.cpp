class Solution 
{
  public:
    long long findSmallest(vector<int> &arr) 
    {
        long long smallest_missing = 1;
        
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i] > smallest_missing)
            {
                break;
            }
            
            smallest_missing += arr[i];
        }
        
        return smallest_missing;
    }
};
