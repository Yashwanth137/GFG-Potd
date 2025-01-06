class Solution {
public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int minDiff = INT_MAX;
        vector<int> res;

        int i = 0, j = n - 1;
        while (i < j) {
            int sum = arr[i] + arr[j];
            int diff = abs(sum - target);

            if (diff < minDiff || (diff == minDiff && abs(arr[j] - arr[i]) > abs(res[1] - res[0]))) {
                minDiff = diff;
                res = {arr[i], arr[j]};
            }

            if (sum < target) {
                i++;
            } else {
                j--;
            }
        }

        return res.empty() ? vector<int>() : res;
    }
};