# Split Linked List Alternatingly
#### Difficulty: Easy, Accuracy: 42.46%, Submissions: 27K+, Points: 2

Given a singly linked list's head. Your task is to complete the function alternatingSplitList(), which splits the given linked list into two smaller lists. The sublists should be made from alternating elements from the original list.
<br>
Note: 

  - The sublist should be in the order concerning the original list.
  - You have to return an array containing both sub-linked lists.

#### Examples:
```
Input: LinkedList = 0->1->0->1->0->1
Output: 0->0->0 , 1->1->1
Explanation: After forming two sublists of the given list as required, we have two lists as: 0->0->0 and 1->1->1.
```
```
Input: LinkedList = 2->5->8->9->6
Output: 2->8->6 , 5->9
Explanation: After forming two sublists of the given list as required, we have two lists as: 2->8->6 and 5->9.
```
```
Input: LinkedList: 7 
Output: 7 , <empty linked list>
```
```
Constraints:
1 <= number of nodes <= 100
1 <= node -> data <= 10^4
```
