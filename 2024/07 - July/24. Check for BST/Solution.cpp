class Solution 
{
public:
    bool isBST(Node* root) 
    {
        return isBSTUtil(root, LONG_MIN, LONG_MAX);
    }

private:
    bool isBSTUtil(Node* node, long minValue, long maxValue) 
    {
        if (node == nullptr) 
        {
            return true;
        }

        if (node->data <= minValue || node->data >= maxValue) 
        {
            return false;
        }
        
        return isBSTUtil(node->left, minValue, node->data) &&
               isBSTUtil(node->right, node->data, maxValue);
    }
};
