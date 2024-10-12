class Solution 
{
    public int pairWithMaxSum(int[] arr) 
    {
        int n = arr.length;
        if(n < 2) return -1;
        
        int maxsum = -1;
        
        for(int i=0; i<n-1; ++i)
        {
            int curr = arr[i] + arr[i+1];
            maxsum = Math.max(maxsum, curr);
        }
        
        return maxsum;
    }
}
