class Solution
{
    void inorder(Node *rt, vector<int> &st){
        if(rt == NULL)
            return;
            
        inorder(rt->left, st);
        st.push_back(rt->data);
        inorder(rt->right, st);
    }
    
public:
    vector<int> serialize(Node *rt) 
    {
        vector<int> st;
        inorder(rt, st);
        return st;
    }
    
    Node * deSerialize(vector<int> &A)
    {
        int n = A.size();
        Node *root = new Node(A[0]);
        
        for(int i=1; i<n; i+=2){
            Node *newRt = new Node(A[i]);
            newRt->left = root;
            if(i+1 < n){
                newRt->right = new Node(A[i+1]);
            }
            root = newRt;
        }
        return root;
    }

};
