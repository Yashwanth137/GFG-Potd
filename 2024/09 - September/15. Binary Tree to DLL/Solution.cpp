class Solution 
{
public:
    Node* prev = nullptr;

    Node* bToDLL(Node* root) 
    {
        if (!root) return nullptr;

        Node* head = nullptr;
        convertToDLL(root, head);
        return head;
    }

private:
    void convertToDLL(Node* node, Node*& head) 
    {
        if (!node) return;

        convertToDLL(node->left, head);

        if (prev == nullptr) 
        {
            head = node;
        } 
        else 
        {
            prev->right = node;
            node->left = prev;
        }

        prev = node;

        convertToDLL(node->right, head);
    }
};
