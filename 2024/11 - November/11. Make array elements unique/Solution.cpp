class Solution 
{
public:
    int minIncrements(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        
        int count = 0;
        
        for (size_t i = 1; i < arr.size(); ++i) 
        {
            if (arr[i] <= arr[i - 1]) 
            {
                int increment = arr[i - 1] + 1 - arr[i];
                arr[i] = arr[i - 1] + 1; 
                count += increment;      
            }
        }
        
        return count;
    }
};
