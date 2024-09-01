class Solution 
{
  public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) 
    {
        int n1 = arr1.size(), n2 = arr2.size();
        int i = 0,j = 0,sum1 = 0,sum2 = 0,res = 0;
        
        while(i < n1 && j <n2)
        {
            if(arr1[i] < arr2[j])
            {
                sum1 += arr1[i];
                i++;
            }
            else if(arr1[i] > arr2[j])
            {
                sum2 += arr2[j];
                j++;
            }
            else
            {
                res += max(sum1, sum2) + arr1[i];
                sum1 = sum2 = 0;
                i++;
                j++;
            }
        }
        while(i < n1)
        {
            sum1 += arr1[i];
            i++;
        }
        while(j < n2)
        {
            sum2 += arr2[j];
            j++;
        }
        res += max(sum1, sum2);
        return res;
    }
};
