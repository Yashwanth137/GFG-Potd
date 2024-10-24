# Reorganize The Array
#### [Question-Link](https://www.geeksforgeeks.org/problems/reorganize-the-array4810/1)
#### Difficulty: Easy, Accuracy: 31.25%, Submissions: 42K+, Points: 2

Given an array of elements arr[] with indices ranging from 0 to arr.size() - 1, your task is to write a program that rearranges the elements of the array such that arr[i] = i. If an element i is not present in the array, -1 should be placed at the corresponding index.
<br>
#### Examples:
```
Input: arr[] = [-1, -1, 6, 1, 9, 3, 2, -1, 4, -1]
Output: [-1, 1, 2, 3, 4, -1, 6, -1, -1, 9]
Explanation: Here We can see there are 10 elements. So, the sorted array will look like [0, 1, 2, 3, 4, 5, 6, 7, 8, 9] but in
our array we are not having 0, 5, 7 and 8. So, at there places we will be printing -1 and otherplaces will be having elements.
```
```
Input: arr[] = [2, 0, 1]
Output: [0, 1, 2]
Explanation: Here We can see all the elements are present so no -1 is returned in array.
```
```
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

Constraints:
0 ≤ arr.size() ≤ 10^5
-1 ≤ arr[i] ≤ arr.size()-1
```