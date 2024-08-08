class Solution 
{
public:
    bool isLeaf(Node* node) 
    {
        return (node == nullptr || (node->left == nullptr && node->right == nullptr));
    }

    bool isSumTreeUtil(Node* node) 
    {
        if (node == nullptr || isLeaf(node)) 
        {
            return true;
        }

        int leftSum = 0, rightSum = 0;

        if (node->left != nullptr) 
        {
            if (!isLeaf(node->left)) 
            {
                leftSum = 2 * (node->left->data);
            } 
            else 
            {
                leftSum = node->left->data;
            }
        }
        
        if (node->right != nullptr) 
        {
            if (!isLeaf(node->right)) 
            {
                rightSum = 2 * (node->right->data);
            } 
            else 
            {
                rightSum = node->right->data;
            }
        }
        return (node->data == leftSum + rightSum) && isSumTreeUtil(node->left) && isSumTreeUtil(node->right);
    }

    bool isSumTree(Node* root) 
    {
        if (root == nullptr || isLeaf(root)) 
        {
            return true;
        }
        return isSumTreeUtil(root);
    }
};
