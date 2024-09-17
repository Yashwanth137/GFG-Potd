class Solution 
{
public:
    int getMinDiff(vector<int> &arr, int k) 
    {
        int n = arr.size();
        if (n == 1) 
        {
            return 0;
        }

        sort(arr.begin(), arr.end());

        int ans = arr[n-1] - arr[0];

        int smallest = arr[0] + k;
        int largest = arr[n-1] - k;

        for (int i = 1; i < n; i++) 
        {
            int minTower = min(smallest, arr[i] - k);
            int maxTower = max(largest, arr[i-1] + k);
            
            if (minTower < 0) continue;
            
            ans = min(ans, maxTower - minTower);
        }
        return ans;
    }
};
