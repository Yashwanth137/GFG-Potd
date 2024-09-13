# Mirror Tree
#### [Question-Link](https://www.geeksforgeeks.org/problems/mirror-tree/1)
#### Difficulty: Easy, Accuracy: 72.67%, Submissions: 199K+, Points: 2

Given a Binary Tree, convert it into its mirror.
![image](https://github.com/user-attachments/assets/27417fc9-3c64-4496-acd1-1ceb27e48ba5)

#### Examples:
```
Input:
      1
    /  \
   2    3
Output: 3 1 2
Explanation: The tree is
  1    (mirror)     1
 /  \    =>        /  \
2    3           3   2
The inorder of mirror is 3 1 2
```
```
Input:
      10
     /  \
    20   30
   /  \
  40  60
Output: 30 10 60 20 40
Explanation: The tree is
      10               10
    /    \  (mirror)    /    \
   20    30    =>   30    20
  /  \                     /   \
 40  60                 60   40
The inroder traversal of mirror is: 30 10 60 20 40.
```
```
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(height of the tree)
```
```
Constraints:
1 ≤ Number of nodes ≤ 10^5
1 ≤ Data of a node ≤ 10^5
```
