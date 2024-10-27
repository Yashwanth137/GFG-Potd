class Solution 
{
public:
    bool findTriplet(vector<int>& arr) 
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        for (int k = 2; k < n; k++) 
        {
            int i = 0;
            int j = k - 1;
            while (i < j) 
            {
                int sum = arr[i] + arr[j];
                if (sum == arr[k]) 
                {
                    return true;
                } 
                else if (sum < arr[k]) 
                {
                    i++;
                } 
                else 
                {
                    j--;
                }
            }
        }
        return false;
    }
};
