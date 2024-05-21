class Solution 
{
public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) 
    {
        vector<pair<int, int>> diff;
        for(int i = 0; i < n; i++) 
        {
            if(abs(arr[i] - x) != 0)
                diff.push_back({abs(arr[i] - x), arr[i]});
        }
        
        sort(diff.begin(), diff.end(), [](const pair<int, int>& a, const pair<int, int>& b) 
        {
            return a.first == b.first ? a.second > b.second : a.first < b.first;
        });
        
        vector<int> res;
        for(int i = 0; i < k; i++) 
        {
            res.push_back(diff[i].second);
        }
        
        return res;
    }
};
