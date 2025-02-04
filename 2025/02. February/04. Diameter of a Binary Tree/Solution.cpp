class Solution 
{
  public:
    int findHeight(Node* root, int &diameter) 
    {
        if (!root) return 0;  
        
        int leftHeight = findHeight(root->left, diameter);
        int rightHeight = findHeight(root->right, diameter);
        
        diameter = max(diameter, leftHeight + rightHeight);
        
        return 1 + max(leftHeight, rightHeight);
    }

    int diameter(Node* root) 
    {
        int diameter = 0;
        findHeight(root, diameter);
        return diameter;
    }
};
