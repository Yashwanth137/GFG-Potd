class Solution 
{
  public:
    vector<int> Ancestors(struct Node *root, int target) 
    {
        vector<int> ans;
        if (root == nullptr) {
            return ans;
        }

        if (root->data == target) {
            return ans;
        }

        vector<int> leftAns = Ancestors(root->left, target);
        if (!leftAns.empty() || (root->left && root->left->data == target)) {
            leftAns.push_back(root->data);
            return leftAns;
        }

        vector<int> rightAns = Ancestors(root->right, target);
        if (!rightAns.empty() || (root->right && root->right->data == target)) {
            rightAns.push_back(root->data);
            return rightAns;
        }

        return ans;
    }
};
