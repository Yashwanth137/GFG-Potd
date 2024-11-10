class Solution 
{
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) 
    {
        set<int> union_set(a.begin(), a.end());
        union_set.insert(b.begin(), b.end());
        
        return vector<int>(union_set.begin(), union_set.end());
    }
};
