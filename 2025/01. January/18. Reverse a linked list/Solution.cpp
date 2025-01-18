class Solution 
{
  public:
    Node* reverseList(struct Node* head) 
    {
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;
        
        while (curr != nullptr) 
        {
            next = curr->next; 
            curr->next = prev; 
            prev = curr;       
            curr = next;       
        }

        return prev;
    }
};
