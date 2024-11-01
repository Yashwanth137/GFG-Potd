# Swap and Maximize
#### [Question-Link](https://www.geeksforgeeks.org/problems/swap-and-maximize5859/1)
#### Difficulty: Easy, Accuracy: 64.35%, Submissions: 44K+, Points: 2

Given an array arr[ ] of positive elements. Consider the array as a circular array, meaning the element after the last element is the first element of the array. The task is to find the maximum sum of the absolute differences between consecutive elements with the shuffling of array elements allowed i.e. shuffle the array elements and make [a1..an] such order that  |a1 – a2| + |a2 – a3| + …… + |an-1 – an| + |an – a1| is maximized.

#### Examples:

Input: arr[] = [4, 2, 1, 8] <br>
Output: 18<br>
Explanation: After Shuffling, we get [1, 8, 2, 4]. Sum of absolute difference between consecutive elements after <br> rearrangement = |1 - 8| + |8 - 2| + |2 - 4| + |4 - 1| = 7 + 6 + 2 + 3 = 18.

<br>
Input: arr[] = [10, 12]<br>
Output: 4<br>
Explanation: No need of rearrangement. Sum of absolute difference between consecutive <br> 
             elements = |10 - 12| + |12 - 10| = 2 + 2 = 4. <br>


<br>
Constraints:<br>
2 ≤ arr.size()≤ 10^5<br>
1 <= arr[i] <= 10^5
<br>


```
class Solution 
{
public:
    long long maxSum(vector<int>& arr) 
    {
        sort(arr.begin(), arr.end());
        
        long long maxSum = 0;
        int n = arr.size();
        
        for (int i = 0; i < n / 2; i++) 
        {
            maxSum += abs(arr[i] - arr[n - i - 1]) * 2;
        }
        
        return maxSum;
    }
};
```
