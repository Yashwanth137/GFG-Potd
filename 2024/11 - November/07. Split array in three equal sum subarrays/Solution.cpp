class Solution 
{
public:
    vector<int> findSplit(vector<int>& arr) 
    {
        int total_sum = 0;
        for (int num : arr) 
        {
            total_sum += num;
        }
        
        if (total_sum % 3 != 0) 
        {
            return {-1, -1};
        }
        
        int target_sum = total_sum / 3;
        int current_sum = 0;
        int first_split = -1, second_split = -1;
        
        for (int i = 0; i < arr.size(); ++i) 
        {
            current_sum += arr[i];
            
            if (current_sum == target_sum && first_split == -1) 
            {
                first_split = i;
            } 
            else if (current_sum == 2 * target_sum && second_split == -1 && first_split != -1) 
            {
                second_split = i;
                break;
            }
        }
        
        if (first_split != -1 && second_split != -1) 
        {
            return {first_split, second_split};
        }
        
        return {-1, -1};
    }
};
