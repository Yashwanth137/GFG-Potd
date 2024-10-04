class Solution 
{
  public:
    Node* reverse(Node* head) 
    {
        if (!head || !head->next || head->next == head) 
        {
            return head;
        }

        Node *prev = nullptr, *current = head, *next = nullptr;
        Node *last = head; 
        
        do 
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        } while (current != head);

        last->next = prev;
        return prev;
    }

    Node* deleteNode(Node* head, int key) 
    {
        if (!head) return nullptr; 

        Node* curr = head;
        Node* prev = nullptr;

        if (head->data == key) 
        {
            if (head->next == head) 
            {
                delete head;
                return nullptr;
            }

            while (curr->next != head) 
            {
                curr = curr->next;
            }
            curr->next = head->next; 
            Node* temp = head;
            head = head->next;
            delete temp; 
            return head;
        }

        Node* temp = head;
        do 
        {
            prev = curr;
            curr = curr->next;
            if (curr->data == key) 
            {
                prev->next = curr->next;
                delete curr;
                return head;
            }
        } while (curr != head);

        return head;
    }
};
