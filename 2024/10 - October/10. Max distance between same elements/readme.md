# Max distance between same elements
#### [Question-Link](https://www.geeksforgeeks.org/problems/max-distance-between-same-elements/1)
#### Difficulty: Easy, Accuracy: 46.67%, Submissions: 56K+, Points: 2

Given an array arr[] with repeated elements, the task is to find the maximum distance between two component occurrences.
<br>
Note: You may assume that every input array has repetitions.

#### Examples:

```
Input: arr = [1, 1, 2, 2, 2, 1]
Output: 5
Explanation: The distance for 1 is 5-0 = 5, and the distance for 2 is 4-2 = 2. So, the max distance is 5.
```
```
Input: arr = [3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2]
Output: 10
Explanation: The maximum distance for 2 is 11-1 = 10, the maximum distance for 1 is 4-2 = 2, and the maximum distance
for 4 is 10-5 = 5, So the maximum distance is 10.
```
```
Expected Time Complexity:  O(n)
Expected Auxilliary Space: O(n)

Constraints:
1 <= arr.size() <= 10^6
1 <= arr[i] <= 10^9
```
