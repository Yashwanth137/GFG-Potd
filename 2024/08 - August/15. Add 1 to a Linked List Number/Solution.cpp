class Solution 
{
    public:
        Node* addOne(Node* head) 
        {
            stack<Node*> temp;
            Node* curr = head;
            
            while (curr) 
            {
                temp.push(curr);
                curr = curr->next;
            }
            
            int carry = 1; 
            while (!temp.empty()) 
            {
                Node* node = temp.top();
                temp.pop();
                int sum = node->data + carry;
                node->data = sum % 10;
                carry = sum / 10;
                
                if (carry == 0) 
                {
                    break;
                }
            }
            
            if (carry > 0) 
            {
                Node* res = new Node(carry);
                res->next = head;
                return res;
            }
            
            return head;
    }
};
