class Solution 
{
  public:
    int verticalWidth(Node* root) 
    {
        if (root == NULL) return 0;
        
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        function<void(Node*, int&, int&, int)> solve = [&](Node* node, int &minValue, int &maxValue, int index) 
        {
            if (node == NULL) return;
            minValue = min(minValue, index);
            maxValue = max(maxValue, index);
            solve(node->left, minValue, maxValue, index - 1);
            solve(node->right, minValue, maxValue, index + 1);
        };
        
        solve(root, mini, maxi, 0);
        return abs(mini) + abs(maxi) + 1;
    }
};
