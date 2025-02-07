class Solution 
{
  public:
    vector<int> inOrder(Node* root) 
    {
        vector<int> result;
        inorderHelper(root, result);
        return result;
    }

  private:
    void inorderHelper(Node* node, vector<int>& result) 
    {
        if (node == nullptr) return;
        inorderHelper(node->left, result);  
        result.push_back(node->data);       
        inorderHelper(node->right, result); 
    }
};
