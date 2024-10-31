class Solution 
{
  public:
    Node* sortedInsert(Node* head, int x) 
    {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->prev = nullptr;
        newNode->next = nullptr;
        
        if (!head) return newNode;
        
        if (x <= head->data) 
        {
            newNode->next = head;
            head->prev = newNode;
            return newNode;
        }
        
        Node* curr = head;
        while (curr->next && curr->next->data < x) 
        {
            curr = curr->next;
        }
        
        newNode->next = curr->next;
        if (curr->next) curr->next->prev = newNode;
        curr->next = newNode;
        newNode->prev = curr;
        
        return head;
    }
};
