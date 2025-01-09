class Solution {
public:
    int countPairs(vector<int>& arr, int target) {
        int left = 0, right = arr.size() - 1;
        int res = 0;

        while (left < right) {
            int sum = arr[left] + arr[right];
            if (sum == target) {
                res++;
                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        return res;
    }
};
