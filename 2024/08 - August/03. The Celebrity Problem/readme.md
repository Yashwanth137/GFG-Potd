# The Celebrity Problem
#### [Question-Link](https://www.geeksforgeeks.org/problems/the-celebrity-problem/1)
#### Difficulty: Medium, Accuracy: 38.33%, Submissions: 253K+, Points: 4
A celebrity is a person who is known to all but does not know anyone at a party. A party is being organized by some people.  A square matrix mat is used to represent people at the party such that if an element of row i and column j is set to 1 it means ith person knows jth person. You need to return the index of the celebrity in the party, if the celebrity does not exist, return -1.
<br>
Note: Follow 0-based indexing.

#### Examples:
![image](https://github.com/user-attachments/assets/46c68b8e-8f77-450b-adb9-851daddcfb4f)
#### Expected Time Complexity: O(n^2)
#### Expected Auxiliary Space: O(1)

#### Constraints:
#### 1 <= mat.size()<= 3000
#### 0 <= mat[i][j]<= 1
