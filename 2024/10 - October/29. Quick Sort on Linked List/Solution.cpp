#include <stack>

class Solution {
public:
    Node* quickSort(Node* head) {
        if (!head || !head->next) return head;

        Node* newHead = nullptr;
        Node* newEnd = nullptr;
        
        Node* pivot = partition(head, getTail(head), &newHead, &newEnd);

        if (newHead != pivot) {
            Node* temp = newHead;
            while (temp->next != pivot) temp = temp->next;
            temp->next = nullptr;
            newHead = quickSort(newHead);
            temp = getTail(newHead);
            temp->next = pivot;
        }

        pivot->next = quickSort(pivot->next);
        return newHead;
    }

private:
    Node* getTail(Node* head) {
        while (head && head->next) head = head->next;
        return head;
    }

    Node* partition(Node* head, Node* end, Node** newHead, Node** newEnd) {
        Node* pivot = end;
        Node* prev = nullptr, *cur = head, *tail = pivot;
        
        while (cur != pivot) {
            if (cur->data < pivot->data) {
                if (!*newHead) *newHead = cur;
                prev = cur;
                cur = cur->next;
            } else {
                if (prev) prev->next = cur->next;
                Node* temp = cur->next;
                cur->next = nullptr;
                tail->next = cur;
                tail = cur;
                cur = temp;
            }
        }
        
        if (!*newHead) *newHead = pivot;
        *newEnd = tail;
        
        return pivot;
    }
};
