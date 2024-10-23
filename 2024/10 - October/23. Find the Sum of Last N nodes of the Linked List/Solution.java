class Solution 
{
    public int sumOfLastN_Nodes(Node head, int n) 
    {
        if(head == null) return 0;
        
        Node temp = head;
        int length = 0;
        
        while(temp != null)
        {
            length++;
            temp = temp.next;
        }
        
        int startPos = length - n;
        temp = head;
        
        while(startPos > 0)
        {
            temp = temp.next;
            startPos--;
        }
        
        int res = 0;
        while(temp != null)
        {
            res += temp.data;
            temp = temp.next;
        }
        
        return res;
    }
}
