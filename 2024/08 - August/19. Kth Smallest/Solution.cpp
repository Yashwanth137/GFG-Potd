class Solution 
{
  public:
    int partition(vector<int> &arr, int left, int right)
    {
        int pivot = arr[right];
        int sortedIndex = left - 1;

        for (int j = left; j < right; j++)
        {
            if (arr[j] < pivot)
            {
                sortedIndex++;
                swap(arr[sortedIndex], arr[j]);
            }
        }
    
        swap(arr[sortedIndex + 1], arr[right]);
        return sortedIndex + 1;
    }
    
    int quickSelect(vector<int> &arr, int left, int right, int k)
    {
        if (left == right)
            return arr[left];
        
        int pivotIndex = partition(arr, left, right);
        
        if (k == pivotIndex)
            return arr[k];
        else if (k < pivotIndex)
            return quickSelect(arr, left, pivotIndex - 1, k);
        else
            return quickSelect(arr, pivotIndex + 1, right, k);
    }
    
    int kthSmallest(vector<int> &arr, int k) 
    {
        return quickSelect(arr, 0, arr.size() - 1, k - 1);
    }
};
