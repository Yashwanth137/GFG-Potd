class Solution {
private:
    int dfs(Node* node, int& maxSum) {
        if (!node) return 0;

        int leftMax = max(0, dfs(node->left, maxSum));
        int rightMax = max(0, dfs(node->right, maxSum));

        maxSum = max(maxSum, leftMax + rightMax + node->data);

        return node->data + max(leftMax, rightMax);
    }

public:
    int findMaxSum(Node* root) {
        int maxSum = INT_MIN;
        dfs(root, maxSum);
        return maxSum;
    }
};
