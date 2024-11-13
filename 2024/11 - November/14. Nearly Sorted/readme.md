# Nearly sorted
#### [Question-Link](https://www.geeksforgeeks.org/problems/nearly-sorted-1587115620/1)
#### Difficulty: Medium, Accuracy: 75.25%, Submissions: 46K+, Points: 4

Given an array arr[], where each element is at most k away from its target position, you need to sort the array optimally.
<br><br>
Note: DO NOT use STL sort() function for this question.

#### Examples:
```
Input: arr[] = [6, 5, 3, 2, 8, 10, 9], k = 3
Output: [2, 3, 5, 6, 8, 9, 10]
Explanation: The sorted array will be 2 3 5 6 8 9 10
```
```
Input: arr[]= [1, 4, 5, 2, 3, 6, 7, 8, 9, 10], k = 2
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
Explanation: The sorted array will be 1 2 3 4 5 6 7 8 9 10
```
```
Constraints:
1 ≤ arr.size() ≤ 10^6
1 ≤ k < arr.size()
1 ≤ arri ≤ 10^6
```
