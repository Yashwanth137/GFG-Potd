class Solution 
{
public:
    int intersectPoint(Node* head1, Node* head2) 
    {
        int len1 = getLength(head1);
        int len2 = getLength(head2);
        
        if (len1 > len2) 
        {
            head1 = advanceByK(head1, len1 - len2);
        } 
        else if (len2 > len1) 
        {
            head2 = advanceByK(head2, len2 - len1);
        }
        
        while (head1 && head2) 
        {
            if (head1 == head2) 
            {
                return head1->data;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        
        return -1;
    }

private:
    int getLength(Node* head) 
    {
        int length = 0;
        while (head) 
        {
            length++;
            head = head->next;
        }
        return length;
    }

    Node* advanceByK(Node* head, int k) 
    {
        while (k-- && head) 
        {
            head = head->next;
        }
        return head;
    }
};
