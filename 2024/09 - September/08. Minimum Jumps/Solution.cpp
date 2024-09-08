class Solution {
public:
    int minJumps(vector<int>& arr) {
        if (arr.size() <= 1) {
            return 0;
        }

        if (arr[0] == 0) {
            return -1;
        }

        int maxReach = arr[0];
        int step = arr[0];
        int jumps = 1;

        for (int i = 1; i < arr.size(); i++) {
            if (i == arr.size() - 1) {
                return jumps;
            }

            maxReach = max(maxReach, i + arr[i]);
            step--;

            if (step == 0) {
                jumps++;
                if (i >= maxReach) {
                    return -1;
                }
                step = maxReach - i;
            }
        }

        return -1;
    }
};
