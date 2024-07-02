void construct(vector<int> &arr, int n, TreeNode* &node)
{
    node = new TreeNode(arr[n]);
    int lindex = 2*n+1, rindex = 2*n+2;
    if(lindex < arr.size())
    {
        construct(arr, lindex, node->left);
    }
    else
    {
        return;
    }
    if(rindex < arr.size())
    {
        construct(arr, rindex, node->right);
    }
}

void convert(Node *head, TreeNode *&root) 
{
    vector<int> res;
    Node* temp = head;
    while(temp != NULL)
    {
        res.push_back(temp->data);
        temp = temp->next;
    }
    construct(res, 0, root);
}
