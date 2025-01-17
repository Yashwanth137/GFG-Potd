# Longest valid Parentheses
#### [Question-Link](https://www.geeksforgeeks.org/problems/longest-valid-parentheses5657/1)
#### Difficulty: Hard, Accuracy: 26.13%, Submissions: 110K+, Points: 8

Given a string str consisting of opening and closing parenthesis '(' and ')'. Find length of the longest valid parenthesis substring.
<be>
A parenthesis string is valid if:
- For every opening parenthesis, there is a closing parenthesis.
- Opening parenthesis must be closed in the correct order.

#### Examples :
```
Input: str = ((()
Output: 2
Explaination: The longest valid parenthesis substring is "()".
```
```
Input: str = )()())
Output: 4
Explaination: The longest valid parenthesis substring is "()()".
```
```
Expected Time Complexity: O(|str|)
Expected Auxiliary Space: O(|str|)

Constraints:
1 ≤ |str| ≤ 10^5
```
