class Solution 
{
  public:
    Node* sortedMerge(Node* head1, Node* head2) 
    {
        if(!head1) return head2;
        if(!head2) return head1;
        
        Node* res = nullptr;
        
        if(head1->data <= head2->data)
        {
            res = head1;
            res->next = sortedMerge(head1->next, head2);
        }
        else
        {
            res = head2;
            res->next = sortedMerge(head1, head2->next);
        }
        
        return res;
    }
};
