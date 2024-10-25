class Solution 
{
public:
    vector<int> alternateSort(vector<int>& arr) 
    {
        vector<int> res;
        
        sort(arr.begin(), arr.end());  
        int left = 0, right = arr.size() - 1;
        
        while (left <= right) 
        {
            if (right >= left) res.push_back(arr[right--]);
            if (left <= right) res.push_back(arr[left++]);   
        }
        
        return res;
    }
};
