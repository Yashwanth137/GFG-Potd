class Solution 
{
  public:
    int missingNumber(int n, vector<int>& arr) 
    {
        int total_sum = n*(n+1)/2;
        int arr_sum = 0;
        for(int i=0; i<n-1; i++)
        {
            arr_sum += arr[i];
        }
        return total_sum - arr_sum;
    }
};
