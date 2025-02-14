class Solution 
{
  private:
    Node *first = NULL, *middle = NULL, *last = NULL, *prev = NULL;

    void inorder(Node* root) 
    {
        if (!root) return;
        
        inorder(root->left);
        
        if (prev && root->data < prev->data) 
        {
            if (!first) 
            { 
                first = prev; 
                middle = root;
            } 
            else 
            {
                last = root; 
            }
        }
        prev = root;

        inorder(root->right);
    }

  public:
    void correctBST(Node* root) 
    {
        first = middle = last = prev = NULL;
        
        inorder(root);
        
        if (first && last) 
            swap(first->data, last->data);
        else if (first && middle)
            swap(first->data, middle->data);
    }
};
