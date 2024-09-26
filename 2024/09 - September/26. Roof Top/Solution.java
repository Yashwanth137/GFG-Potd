class Solution 
{
    public int maxStep(int arr[]) 
    {
        int temp = 0, res = 0;
        for(int i=0; i+1<arr.length; i++)
        {
            if(arr[i+1] > arr[i])
                temp++;
            else
                temp = 0;
            res = Math.max(res, temp);
        }
        
        return res;
    }
}
