class Solution 
{
  public:
    int getMinDiff(int k, vector<int> &arr) 
    {
        int n = arr.size();
        if(n == 1) return 0;
        
        sort(arr.begin(), arr.end());
        
        int diff = arr[n-1] - arr[0];
        
        for(int i=0; i<n-1; i++)
        {
            int minVal = min(arr[0] + k, arr[i+1] - k);
            int maxVal = max(arr[n-1] - k, arr[i] + k);
            
            diff = min(diff, maxVal - minVal);
        }
        
        return diff;
    }
};
