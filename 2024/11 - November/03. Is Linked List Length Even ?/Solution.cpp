class Solution 
{
  public:
    bool isLengthEven(struct Node **head) 
    {
        int length = 0;
        Node* curr = *head;
        
        while(curr != nullptr)
        {
            curr = curr->next;
            length++;
        }
        
        if(length % 2 == 0) return true;
        
        return false;
    }
};
