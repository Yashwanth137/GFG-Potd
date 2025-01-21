class Solution 
{
public:
    Node* reverseKGroup(Node* head, int k) 
    {
        if (!head || k <= 1) return head;
        
        Node* current = head;
        Node* resultHead = nullptr;
        Node* previousTail = nullptr;
        
        while (current) 
        {
            Node* prevInGroup = nullptr;
            Node* groupHead = current;
            int nodeCount = 0;
            
            while (current && nodeCount < k) 
            {
                Node* temp = current->next;
                current->next = prevInGroup;
                prevInGroup = current;
                current = temp;
                nodeCount++;
            }

            if (!resultHead) resultHead = prevInGroup;
            if (previousTail) previousTail->next = prevInGroup;
            previousTail = groupHead;
        }

        return resultHead;
    }
};
