class Solution 
{
public:
    Node* findFirstNode(Node* head) 
    {
        if (!head || !head->next) return nullptr;
        
        Node* slow = head;
        Node* fast = head;
        
        while (fast && fast->next) 
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) 
            {
                Node* entry = head;
                
                while (entry != slow) 
                {
                    entry = entry->next;
                    slow = slow->next;
                }
                return entry; 
            }
        }
        
        return nullptr;
    }
};
