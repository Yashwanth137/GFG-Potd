class Solution 
{
public:
    bool isPalindrome(Node* head) 
    {
        if (!head || !head->next) return true;
        
        Node* slow = head;
        Node* fast = head;
        while (fast && fast->next) 
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        Node* secondHalf = reverseList(slow);

        Node* firstHalf = head;
        Node* temp = secondHalf;
        bool isPalin = true;
        while (temp) 
        {
            if (firstHalf->data != temp->data) 
            {
                isPalin = false;
                break;
            }
            firstHalf = firstHalf->next;
            temp = temp->next;
        }

        reverseList(secondHalf);

        return isPalin;
    }

private:
    Node* reverseList(Node* head) 
    {
        Node* prev = nullptr;
        Node* curr = head;
        while (curr) 
        {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
};
