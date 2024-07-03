class Solution 
{
  public:
    Node* removeAllDuplicates(struct Node* head) 
    {
        if(!head) return nullptr;

        Node* curr = head;
        Node* temp = new Node(0);
        temp->next = head;
        Node* prev = temp;
        
        while (curr) 
        {
            if (curr->next && curr->data == curr->next->data) 
            {
                while (curr->next && curr->data == curr->next->data) 
                {
                    curr = curr->next;
                }
                prev->next = curr->next;
            } 
            else 
            {
                prev = curr;
            }
            curr = curr->next;
        }
    
        head = temp->next;
        delete temp;
        return head;
    }
};
