class Solution 
{
public:
    DLLNode* sortAKSortedDLL(DLLNode* head, int k) 
    {
        if (!head) return NULL;

        priority_queue<int, vector<int>, greater<int>> minHeap;
        DLLNode *newHead = NULL, *tail = NULL;
        DLLNode *current = head;

        for (int i = 0; current != NULL && i <= k; ++i) 
        {
            minHeap.push(current->data);
            current = current->next;
        }
        
        while (!minHeap.empty()) 
        {
            int minVal = minHeap.top();
            minHeap.pop();

            DLLNode *newNode = new DLLNode(minVal);

            if (newHead == NULL) 
            {
                newHead = newNode;
                tail = newHead;
            } 
            else 
            {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }
            
            if (current != NULL) 
            {
                minHeap.push(current->data);
                current = current->next;
            }
        }

        return newHead;
    }
};
