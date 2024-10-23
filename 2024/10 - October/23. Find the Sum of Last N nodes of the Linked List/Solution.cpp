class Solution 
{
  public:
    int sumOfLastN_Nodes(struct Node* head, int n) 
    {
       Node* temp = head;
        int length = 0;
        while (temp != NULL) 
        {
            length++;
            temp = temp->next;
        }
        
        int startPos = length - n;
        temp = head;
        
        while (startPos > 0) 
        {
            temp = temp->next;
            startPos--;
        }
        
        int sum = 0;
        while (temp != NULL) 
        {
            sum += temp->data;
            temp = temp->next;
        }
        
        return sum;
    }
};
