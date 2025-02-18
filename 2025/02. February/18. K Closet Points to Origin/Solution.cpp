class Solution 
{
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        vector<pair<int, vector<int>>> distances;
        
        for (auto& point : points) 
        {
            int distance = point[0] * point[0] + point[1] * point[1];
            distances.push_back({distance, point});
        }
        
        sort(distances.begin(), distances.end());
        
        vector<vector<int>> res;
        for (int i = 0; i < k; i++) 
        {
            res.push_back(distances[i].second);
        }
        
        return res;
    }
};
