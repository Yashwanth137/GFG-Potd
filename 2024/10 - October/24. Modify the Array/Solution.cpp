class Solution 
{
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) 
    {
        int n = arr.size();
        
        for (int i = 0; i < n - 1; ++i) 
        {
            if (arr[i] != 0 && arr[i] == arr[i + 1]) 
            {
                arr[i] = arr[i] * 2;
                arr[i + 1] = 0;
            }
        }
        
        int index = 0;
        for (int i = 0; i < n; ++i) 
        {
            if (arr[i] != 0) 
            {
                arr[index++] = arr[i];
            }
        }
        
        while (index < n) 
        {
            arr[index++] = 0;
        }
        
        return arr;
    }
};
