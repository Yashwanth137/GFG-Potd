class Solution 
{
    public:
    bool ispossible(vector<int> &arr, int k, int maxP)
    {
        int students = 1, currentSum = 0;
        for (int pages : arr) 
        {
            if (currentSum + pages > maxP) 
            {
                students++;
                currentSum = pages;
                if (students > k) return false;
            } 
            else 
            {
                currentSum += pages;
            }
        }
        return true;
    }
    
    int findPages(vector<int> &arr, int k) 
    {
        int n = arr.size();
        if (k > n) return -1;
        
        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        int res = -1;
        
        while (low <= high) 
        {
            int mid = low + (high - low) / 2;
            if (ispossible(arr, k, mid)) 
            {
                res = mid;
                high = mid - 1; 
            } 
            else 
            {
                low = mid + 1; 
            }
        }
        return res;
    }
};
