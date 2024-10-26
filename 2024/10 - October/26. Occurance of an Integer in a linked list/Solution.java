class Solution 
{
    public static int count(Node head, int key) 
    {
        int res = 0;
        
        if(head == null) return res;
        
        while(head != null)
        {
            if(head.data == key)
            {
                res++;
            }
            head = head.next;
        }
        
        return res;
    }
}
