# Kth distance
#### [Question-Link](https://www.geeksforgeeks.org/problems/kth-distance3757/1)
#### Difficulty: EasyAccuracy: 48.69%Submissions: 23K+Points: 2

Given an unsorted array arr and a number k which is smaller than the size of the array. Find if the array contains any duplicate within k distance.

#### Examples:
```
Input: arr[] = [1, 2, 3, 4, 1, 2, 3, 4] and k = 3
Output: false
Explanation: All duplicates are more than k distance away.
```
```
Input: arr[] = [1, 2, 3, 1, 4, 5] and k = 3
Output: true
Explanation: 1 is repeated at distance 3.
```
```
Constraints:
1 ≤ arr.size() ≤ 10^6
1 ≤ k < arr.size()
1 ≤ arr[i] ≤ 10^5
```
```
class Solution 
{
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) 
    {
        unordered_map<int, int> index_map;
        
        for(int i=0; i<arr.size(); i++)
        {
            if(index_map.find(arr[i]) != index_map.end())
            {
                int last_index = index_map[arr[i]];
                
                if(i - last_index <= k)
                {
                    return true;
                }
            }
            index_map[arr[i]] = i;
        }
        
        return false;
    }
};
```
