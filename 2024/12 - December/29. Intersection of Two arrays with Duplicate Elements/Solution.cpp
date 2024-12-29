class Solution 
{
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) 
    {
        unordered_set<int> b_set(b.begin(), b.end());
        unordered_set<int> seen;
        vector<int> res;
        
        for(int num: a)
        {
            if(b_set.count(num) && !seen.count(num))
            {
                res.push_back(num);
                seen.insert(num);
            }
        }
        
        return res;
    }
};
