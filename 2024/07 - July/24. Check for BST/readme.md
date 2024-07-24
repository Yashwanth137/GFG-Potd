# Check for BST
#### [Question-Link](https://www.geeksforgeeks.org/problems/check-for-bst/1)
#### Difficulty: Easy, Accuracy: 25.37%, Submissions: 522K+, Points: 2
Given the root of a binary tree. Check whether it is a BST or not.
  Note: We are considering that BSTs can not contain duplicate Nodes.
  A BST is defined as follows:
<br>
The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
#### Examples:
![image](https://github.com/user-attachments/assets/3ef01efa-e7db-4483-926c-6bda597c4049)
![image](https://github.com/user-attachments/assets/25efaf77-d23a-435b-a563-cb0481b11754)
![image](https://github.com/user-attachments/assets/28ae7502-0406-49bb-ad16-677b17a03914)
#### Expected Time Complexity: O(n) 
#### Expected Auxiliary Space: O(Height of the tree)
#### where n is the number of nodes in the given tree

#### Constraints:
#### 1 ≤ Number of nodes ≤ 10^5
#### 1 ≤ Data of a node ≤ 10^5
