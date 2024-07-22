class Solution
{
public:
    struct Info 
    {
        int size;     
        int max;       
        int min;       
        int largestBSTSize; 
        bool isBST;    
    };
    
    Info largestBSTHelper(Node* root) 
    {
        if (!root) 
        {
            return {0, INT_MIN, INT_MAX, 0, true};
        }
        
        if (!root->left && !root->right) 
        {
            return {1, root->data, root->data, 1, true};
        }
        
        Info leftInfo = largestBSTHelper(root->left);
        Info rightInfo = largestBSTHelper(root->right);
        
        Info curr;
        curr.size = 1 + leftInfo.size + rightInfo.size;
        
        if (leftInfo.isBST && rightInfo.isBST && root->data > leftInfo.max && root->data < rightInfo.min) 
        {
            curr.min = min(leftInfo.min, root->data);
            curr.max = max(rightInfo.max, root->data);
            
            curr.largestBSTSize = curr.size;
            curr.isBST = true;
            
            return curr;
        }
        
        curr.largestBSTSize = max(leftInfo.largestBSTSize, rightInfo.largestBSTSize);
        curr.isBST = false;
        
        return curr;
    }
    
    int largestBst(Node *root) 
    {
        return largestBSTHelper(root).largestBSTSize;
    }
};
