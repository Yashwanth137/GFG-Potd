class Solution 
{
  public:
    int kthMissing(vector<int> &arr, int k) 
    {
        int missing = 0, curr = 1, pos = 0;
        
        while(true)
        {
            if(arr[pos] == curr && pos < arr.size())
            {
                pos++;
            }
            else
            {
                missing += 1;
                if(missing == k)
                {
                    return curr;
                }
            }
            curr++;
        }
    }
};
