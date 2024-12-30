class Solution 
{
  public:
    int findUnion(vector<int>& a, vector<int>& b) 
    {
        unordered_set<int> unq;
        
        for(int num: a)
        {
            unq.insert(num);
        }
        
        for(int num: b)
        {
            unq.insert(num);
        }
        
        return unq.size();
    }
};
