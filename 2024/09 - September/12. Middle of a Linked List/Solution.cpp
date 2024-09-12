class Solution 
{
  public:
    int getMiddle(Node* head) 
    {
        if(!head) return -1;
        
        int len = 0;
        
        Node* curr = head;
        while(curr)
        {
            len++;
            curr = curr->next;
        }
        curr = head;
        for(int i=0; i<len/2; i++)
        {
            curr = curr->next;
        }
        
        return curr->data;
    }
};
