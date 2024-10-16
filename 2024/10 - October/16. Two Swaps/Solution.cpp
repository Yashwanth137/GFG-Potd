
class Solution 
{
public:
    bool checkSorted(vector<int>& arr) 
    {
        int n = arr.size();
        int swap_count = 0;
        
        for (int i = 0; i < n; ) 
        {
            if (arr[i] - 1 != i) 
            {
                swap(arr[i], arr[arr[i] - 1]);
                swap_count++;
            } 
            else 
            {
                i++;
            }
        }

        return swap_count == 0 || swap_count == 2;
    }
};
