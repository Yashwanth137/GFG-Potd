class Solution 
{
  public:
    unordered_map<int, int> inMap;
    int preIndex = 0;
    
    Node* buildTreeUtil(vector<int> &preorder, vector<int> &inorder, int inStart, int inEnd) 
    {
        if (inStart > inEnd) return NULL;
        
        int rootValue = preorder[preIndex++];
        Node* root = new Node(rootValue);
        
        int inIndex = inMap[rootValue];
        
        root->left = buildTreeUtil(preorder, inorder, inStart, inIndex - 1);
        root->right = buildTreeUtil(preorder, inorder, inIndex + 1, inEnd);
        
        return root;
    }
    
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) 
    {
        for (int i = 0; i < inorder.size(); i++) 
        {
            inMap[inorder[i]] = i;
        }
        
        return buildTreeUtil(preorder, inorder, 0, inorder.size() - 1);
    }
};
