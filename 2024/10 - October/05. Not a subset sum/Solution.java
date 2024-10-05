class Solution 
{
    public long findSmallest(int[] arr) 
    {
        long smallest_missing = 1;
        
        for(int i=0; i<arr.length; i++)
        {
            if(arr[i] > smallest_missing) break;
            
            smallest_missing += arr[i];
        }
        
        return smallest_missing;
    }
}
