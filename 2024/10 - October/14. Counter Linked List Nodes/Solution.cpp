class Solution 
{
  public:
    int getCount(struct Node* head) 
    {
        if(head == NULL) return 0;
        
        int len = 0;
        while(head != NULL)
        {
            head = head->next;
            len++;
        }
        
        return len;
    }
};
