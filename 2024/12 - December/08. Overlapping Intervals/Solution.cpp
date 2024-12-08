class Solution 
{
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) 
    {
        vector<vector<int>> res;
        
        if(arr.empty()) return res;
        
        sort(arr.begin(), arr.end(), [](const vector<int>& a, const vector<int>&b){
           return (a[0] < b[0]); 
        });
        
        vector<int> curr = arr[0];
        
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i][0] <= curr[1])
            {
                curr[1] = max(curr[1], arr[i][1]);
            }
            else
            {
                res.push_back(curr);
                curr = arr[i];
            }
        }
        
        res.push_back(curr);
        
        return res;
    }
};
