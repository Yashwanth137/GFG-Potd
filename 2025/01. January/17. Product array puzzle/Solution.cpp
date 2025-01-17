class Solution 
{
  public:
    vector<int> productExceptSelf(vector<int>& arr) 
    {
        vector<int> res(arr.size(), 1);
        int prefix = 1, suffix = 1;
        
        for(int i=0; i<arr.size(); i++)
        {
            res[i] = prefix;
            prefix *= arr[i];
        }
        
        for(int i = arr.size() - 1; i >=0; i--)
        {
            res[i] *= suffix;
            suffix *= arr[i];
        }
        
        return res;
    }
};
