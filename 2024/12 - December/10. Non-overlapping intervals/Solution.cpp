class Solution 
{
  public:
    int minRemoval(vector<vector<int>> &intervals) 
    {
        int res = 0;
        
        if(intervals.empty()) return 0;
        
        sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b)
        {
            return (a[0] < b[0]);
        });
        
        int prev = intervals[0][1];
        
        for(int i=1; i<intervals.size(); i++)
        {
            if(intervals[i][0] < prev)
            {
                res++;
                prev = min(prev, intervals[i][1]);
            }
            else
            {
                prev = intervals[i][1];
            }
        }
        
        return res;
    }
};
