class Solution {
public:
    Node* deleteNode(Node* head, int x) {
        if (!head || x <= 0) {
            return head;
        }
        Node* curr = head;
        if (x == 1) { 
            head = head->next;
            if (head) {
                head->prev = nullptr;
            }
            delete curr;
            return head;
        }
        for (int i = 1; curr != nullptr && i < x; i++) {
            curr = curr->next;
        }
        if (curr == nullptr) {
            return head;
        }
        if (curr->next) {
            curr->next->prev = curr->prev;
        }
        if (curr->prev) {
            curr->prev->next = curr->next;
        }
        delete curr;
        
        return head;
    }
};
