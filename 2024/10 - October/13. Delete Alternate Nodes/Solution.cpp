class Solution 
{
  public:
    void deleteAlt(struct Node *head) 
    {
        if(head == NULL) return;
        
        Node* prev = head;
        Node* curr = head->next;

        while (prev != NULL && curr != NULL) 
        {
            prev->next = curr->next;
            delete curr;
            
            prev = prev->next;
            if (prev != NULL)
                curr = prev->next;
        }
    }
};
