class Solution 
{
    public int countBuildings(int[] height) 
    {
        if(height.length == 0)
            return 0;
            
        int res = 1, tallest = height[0];
        for(int i=1; i<height.length; i++)
        {
            if(height[i] > tallest)
            {
                res++;
                tallest = height[i];
            }
        }
        
        return res;
    }
}
