# Left View of Binary Tree
#### [Question-Link](https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1)
#### Difficulty: Easy, Accuracy: 33.74%, Submissions: 514K+, Points: 2

Given a Binary Tree, return its Left view. The left view of a Binary Tree is a set of nodes visible when the tree is visited from the Left side. If no left view is possible, return an empty array.

#### Examples :
```
Input: root[] = [1, 2, 3, 4, 5, 6, 7, N, 8]
          1
       /     \
     2        3
   /     \    /    \
  4     5   6    7
   \
     8   
Output: [1, 2, 4, 8]
Explanation: When we view the tree from the left side, we can only see the nodes 1, 2, 4, and 8.
```
```
Input: root[] = [1, 3, N, N, 4]
Output: [1, 3, 4]
```
```
Input: root[] = [N]
Output: []
```
#### Expected Time Complexity: O(n)
#### Expected Auxiliary Space: O(n)

#### Constraints:
#### 0 <= Number of nodes <= 10^5
#### 0 <= Data of a node <= 10^5
