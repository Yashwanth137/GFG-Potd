class Solution 
{
public:
    Node* sortedArrayToBST(vector<int>& nums) 
    {
        return buildBST(nums, 0, nums.size() - 1);
    }

private:
    Node* buildBST(const vector<int>& nums, int left, int right) 
    {
        if (left > right) 
        {
            return nullptr;
        }

        int mid = left + (right - left) / 2;
        Node* node = new Node(nums[mid]);

        node->left = buildBST(nums, left, mid - 1);
        node->right = buildBST(nums, mid + 1, right);

        return node;
    }
};
