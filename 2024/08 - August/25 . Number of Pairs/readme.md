# Number of pairs
#### [Question-Link](https://www.geeksforgeeks.org/problems/number-of-pairs-1587115620/1)
#### Difficulty: Medium, Accuracy: 21.82%, Submissions: 86K+, Points: 4

Given two positive integer arrays arr and brr, find the number of pairs such that xy > yx (raised to power of) where x is an element from arr and y is an element from brr.

#### Examples :
```
Input: arr[] = [2, 1, 6], brr[] = [1, 5]
Output: 3
Explanation: The pairs which follow x^y > y^x are: 2^1 > 1^2,  2^5 > 5^2 and 6^1 > 1^6 .
```
```
Input: arr[] = [2 3 4 5], brr[] = [1 2 3]
Output: 5
Explanation: The pairs which follow x^y > y^x are: 2^1 > 1^2 , 3^1 > 1^3 , 3^2 > 2^3 , 4^1 > 1^4 , 5^1 > 1^5 .
```
#### Expected Time Complexity: O((N + M)log(N)).
#### Expected Auxiliary Space: O(1).

#### Constraints:
#### 1 ≤ arr.size(), brr.size() ≤ 10^5
#### 1 ≤ brr[i], arr[i] ≤ 10^3
