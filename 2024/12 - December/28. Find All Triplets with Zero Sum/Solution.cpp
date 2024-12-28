class Solution 
{
  public:
    vector<vector<int>> findTriplets(vector<int> &arr)
    {
        vector<vector<int>> res;
        int n=arr.size();
        
        unordered_map<int,vector<int>> map;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k:map[-arr[i]-arr[j]])
                    res.push_back({k,i,j});
            }
            map[arr[i]].push_back(i);
        }
        return res;
    }
};
