class Solution 
{
public:
    int treePathsSum(Node *root) 
    {
        return calculatePathSum(root, 0);
    }

private:
    int calculatePathSum(Node *node, int current_sum) 
    {
        if (!node) return 0;
        
        current_sum = 10 * current_sum + node->data;
        
        if (!node->left && !node->right) return current_sum;
        
        int left_sum = calculatePathSum(node->left, current_sum);
        int right_sum = calculatePathSum(node->right, current_sum);
        
        return left_sum + right_sum;
    }
};
