class Solution {
public:
    int min_operations(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n, 1);
        int res = 1;
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j] && (nums[i] - nums[j]) >= (i - j)) {
                    arr[i] = max(1 + arr[j], arr[i]);
                    res = max(res, arr[i]);
                }
            }
        }
        return (n - res);
    }
};
