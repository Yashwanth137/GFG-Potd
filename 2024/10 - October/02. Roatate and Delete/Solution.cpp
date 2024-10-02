class Solution 
{
  public:
    int rotateDelete(vector<int> &arr) 
    {
        int sz = arr.size();
        
        for (int k = 1; k <= sz / 2; ++k) 
        {
            int lastElement = arr.back();  
            arr.pop_back(); 
            arr.insert(arr.begin(), lastElement);  
            
            int deleteIndex = arr.size() - k; 
            arr.erase(arr.begin() + deleteIndex); 
        }
        
        return arr[0];
    }
};
