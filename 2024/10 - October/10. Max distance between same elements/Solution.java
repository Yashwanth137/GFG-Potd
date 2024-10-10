class Solution 
{
    public int maxDistance(int[] arr) 
    {
        HashMap<Integer, Integer> first_occ = new HashMap<>();
        int max_d = 0;
        
        for(int i=0; i<arr.length; i++)
        {
            int num = arr[i];
            
            if(first_occ.containsKey(num))
            {
                int d = i - first_occ.get(num);
                max_d = Math.max(max_d, d);
            }
            else
            {
                first_occ.put(num, i);
            }
        }
        
        return max_d;
    }
}
