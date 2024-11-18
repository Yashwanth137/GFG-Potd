class Solution 
{
  public:
    void rotateArr(vector<int>& arr, int d) 
    {
        int len = arr.size();
        d = d % len;
        
        reverse(arr.begin(), arr.begin() + d);
        
        reverse(arr.begin() + d, arr.end());
        
        reverse(arr.begin(), arr.end());
    }
};
