# Binary Tree to DLL
#### [Question-Link](https://www.geeksforgeeks.org/problems/binary-tree-to-dll/1)
#### Difficulty: Hard, Accuracy: 53.36%, Submissions: 148K+, Points: 8

Given a Binary Tree (BT), convert it to a Doubly Linked List (DLL) in place. The left and right pointers in nodes will be used as previous and next pointers respectively in converted DLL. The order of nodes in DLL must be the same as the order of the given Binary Tree. The first node of Inorder traversal (leftmost node in BT) must be the head node of the DLL.
<br>
Note: h is the tree's height, and this space is used implicitly for the recursion stack.
![image](https://github.com/user-attachments/assets/160f3f23-f18d-48d6-936a-e43da41af245)

#### Examples:
```
Input:
      1
    /  \
   3    2
Output:
3 1 2 
2 1 3
![image](https://github.com/user-attachments/assets/21066e43-b43a-4330-b7a2-e9af144f1c98)
Explanation: DLL would be 3<=>1<=>2
```
```
Input:
       10
      /   \
     20   30
   /   \
  40   60
Output:
40 20 60 10 30 
30 10 60 20 40
![image](https://github.com/user-attachments/assets/41799b1d-ada2-4ad4-a177-aca916ebbae0)
Explanation:  DLL would be 40<=>20<=>60<=>10<=>30.
```
```
Expected Time Complexity: O(no. of nodes)
Expected Space Complexity: O(height of the tree)

Constraints:
1 ≤ Number of nodes ≤ 10^5
0 ≤ Data of a node ≤ 10^5

```
