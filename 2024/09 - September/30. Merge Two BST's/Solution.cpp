class Solution 
{
  public:
    void inorder(Node* root, vector<int> &res)
    {
        if(root == NULL) return;
        
        inorder(root->left, res);
        res.push_back(root->data);
        inorder(root->right, res);
    }
    
    vector<int> mergeSortedVectors(vector<int>& list1, vector<int>& list2) 
    {
        vector<int> mergedList;
        int i = 0, j = 0;
        int n1 = list1.size(), n2 = list2.size();
        
        while (i < n1 && j < n2) 
        {
            if (list1[i] < list2[j]) 
            {
                mergedList.push_back(list1[i++]);
            } 
            else 
            {
                mergedList.push_back(list2[j++]);
            }
        }
        
        while (i < n1) 
        {
            mergedList.push_back(list1[i++]);
        }
        
        while (j < n2) 
        {
            mergedList.push_back(list2[j++]);
        }
        
        return mergedList;
    }
    
    vector<int> merge(Node *root1, Node *root2) 
    {
        vector<int> l1, l2;
        
        inorder(root1, l1);
        inorder(root2, l2);
        
        return mergeSortedVectors(l1, l2);
    }
};
