class Solution 
{
public:
    Node* cloneLinkedList(Node *head) 
    {
        if (head == NULL) return NULL;
        
        Node *t = head;
        while (t != NULL) 
        {
            Node *clone = new Node(t->data);  
            clone->next = t->next;  
            t->next = clone;        
            t = clone->next;        
        }
        
        t = head;
        while (t != NULL) 
        {
            if (t->random != NULL) 
            {
                t->next->random = t->random->next; 
            }
            t = t->next->next; 
        }
        
        t = head;
        Node *head2 = head->next; 
        Node *clone = head2;
        
        while (t != NULL) 
        {
            t->next = t->next->next;    
            if (clone->next != NULL) 
            {
                clone->next = clone->next->next;  
            }
            t = t->next;        
            clone = clone->next; 
        }
        
        return head2;  
    }
};
