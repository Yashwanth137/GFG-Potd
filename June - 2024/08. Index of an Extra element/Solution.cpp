class Solution 
{
  public:
    int findExtra(int n, int arr1[], int arr2[]) 
    {
        int res = -1;
        for(int i=0; i<n; i++)
        {
            if(arr1[i] != arr2[i])
            {
                res = i;
                break;
            }
        }
        return res;
    }
};
