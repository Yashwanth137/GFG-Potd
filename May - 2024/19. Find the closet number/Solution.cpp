class Solution
{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        int res = arr[0], dif = abs(arr[0]-k);
        for(int i=1; i<n; i++)
        {
            if(dif >= abs(arr[i]-k))
            {
                dif = abs(arr[i]-k);
                res = arr[i];
            }
        }
        return res;
    } 
};
