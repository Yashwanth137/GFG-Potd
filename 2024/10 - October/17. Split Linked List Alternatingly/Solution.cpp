class Solution 
{
public:
    vector<Node*> alternatingSplitList(struct Node* head) 
    {
        Node *list1 = nullptr, *list2 = nullptr; 
        Node *tail1 = nullptr, *tail2 = nullptr; 
        int i = 0;
        
        while (head != nullptr)
        {
            if (i % 2 == 0)
            {
                if (list1 == nullptr)
                {
                    list1 = new Node(head->data);  
                    tail1 = list1;
                }
                else
                {
                    tail1->next = new Node(head->data);  
                    tail1 = tail1->next;
                }
            }
            else
            {
                if (list2 == nullptr)
                {
                    list2 = new Node(head->data); 
                    tail2 = list2;
                }
                else
                {
                    tail2->next = new Node(head->data);  
                    tail2 = tail2->next;
                }
            }
            
            i++;
            head = head->next;  
        }
        
        return {list1, list2};  
    }
};
