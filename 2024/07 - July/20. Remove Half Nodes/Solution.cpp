class Solution 
{
  public:
    Node *RemoveHalfNodes(Node *root) 
    {
        if(!root) return nullptr;
        
        root->left = RemoveHalfNodes(root->left);
        root->right = RemoveHalfNodes(root->right);
        
       if (!root->left && root->right) 
       {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        
        if (root->left && !root->right) 
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        
        return root;
    }
};
