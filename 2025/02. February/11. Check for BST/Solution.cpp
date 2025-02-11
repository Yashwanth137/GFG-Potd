class Solution 
{
  public:
    bool isBST(Node* root) 
    {
        return isValid(root, LONG_MIN, LONG_MAX);
    }
  
  private:
    bool isValid(Node* node, long low, long high)
    {
        if(!node)
        {
            return true;
        }
        
        if(node->data <= low || node->data >= high)
        {
            return false;
        }
        
        return isValid(node->left, low, node->data) && isValid(node->right, node->data, high);
    }
};
