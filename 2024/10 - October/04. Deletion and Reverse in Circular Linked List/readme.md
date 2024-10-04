# Deletion and Reverse in Circular Linked List
#### [Question-Link](https://www.geeksforgeeks.org/problems/deletion-and-reverse-in-linked-list/1)
#### Difficulty: Medium, Accuracy: 60.7%, Submissions: 45K+, Points: 4

Given a Circular Linked List. The task is to delete the given node key in the circular linked list and reverse the circular linked list.
<be>
Note:

  - You don't have to print anything, return the head of the modified list in each function.
  - Nodes may consist of Duplicate values.
  - The key may or may not be present.

#### Examples:
```
Input: Linked List: 2->5->7->8->10, key = 8
Output: 10->7->5->2 
Explanation: After deleting 8 from the given circular linked list, it has elements as 2, 5, 7, 10. Now, reversing this list will
result in 10, 7, 5, 2 & the resultant list is also circular.
```
```
Input: Linked List: 1->7->8->10, key = 8
Output: 10->7->1
Explanation: After deleting 8 from the given circular linked list, it has elements as 1, 7,10. Now, reversing this list will
result in 10, 7, 1 & the resultant list is also circular.
```
```
Input: Linked List: 3->6->4->10, key = 9
Output: 10->4->6->3
Explanation: As there no key present in the list, so simply reverse the list & the resultant list is also circular.
```
```
Expected Time Complexity: O(n)
Expected Auxillary Space: O(1)

Constraints:
2 <= number of nodes, key  <= 10^5
1 <= node -> data <= 10^5
```
