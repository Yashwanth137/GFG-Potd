class Solution 
{
    public:
    int kthSmallest(Node *root, int k) 
    {
        if (root == NULL) 
        {
            return -1;
        }
        
        vector<int> arr;
        inorder(root, arr);
        
        if(k > arr.size()) return -1;
        return arr[k - 1];
    }
    
    private:
    void inorder(Node *root, vector<int>& arr)
    {
        if (root == NULL) 
        {
            return;
        }
        
        inorder(root->left, arr);
        arr.push_back(root->data);
        inorder(root->right, arr);
    }
};
