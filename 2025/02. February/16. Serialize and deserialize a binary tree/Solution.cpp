class Solution
{
    void inorder(Node *root, vector<int> &store)
    {
        if(root == NULL)
            return;
            
        inorder(root->left, store);
        store.push_back(root->data);
        inorder(root->right, store);
    }
    
    public:
    vector<int> serialize(Node *root) 
    {
        vector<int> str;
        inorder(root, str);
        return str;
    }
    
    Node * deSerialize(vector<int> &A)
    {
        int n = A.size();
        Node *root = new Node(A[0]);
        
        for(int i=1; i<n; i+=2)
        {
            Node *newRoot = new Node(A[i]);
            newRoot->left = root;
            if(i+1 < n)
            {
                newRoot->right = new Node(A[i+1]);
            }
            root = newRoot;
        }
        return root;
    }
};
