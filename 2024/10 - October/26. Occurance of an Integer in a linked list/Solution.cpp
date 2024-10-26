class Solution 
{
  public:
    int count(struct Node* head, int key) 
    {
        int res = 0;
        
        if(head == NULL) return res;
        
        while(head != NULL)
        {
            if(head->data == key)
            {
                res++;
            }
            head = head->next;
        }
        
        return res;
    }
};
