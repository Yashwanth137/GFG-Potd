# Is Linked List Length Even?
#### [Question-Link](https://www.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1)
#### Difficulty: Basic, Accuracy: 71.58%, Submissions: 76K+, Points: 1

Given a linked list, your task is to complete the function isLengthEven() which contains the head of the linked list, and check whether the length of the linked list is even or not. Return true if it is even, otherwise false.

#### Examples:
```
Input: Linked list: 12->52->10->47->95->0

Output: true
Explanation: The length of the linked list is 6 which is even, hence returned true.
```
```
Input: Linked list: 9->4->3

Output: false
Explanation: The length of the linked list is 3 which is odd, hence returned false.
```
```
Expected Time Complexity: O(n)
Expected Auxillary Space: O(1)

Constraints:
1 <= number of nodes <= 10^5
1 <= elements of the linked list <= 10^5
```

```
class Solution 
{
  public:
    bool isLengthEven(struct Node **head) 
    {
        int length = 0;
        Node* curr = *head;
        
        while(curr != nullptr)
        {
            curr = curr->next;
            length++;
        }
        
        if(length % 2 == 0) return true;
        
        return false;
    }
};
```
