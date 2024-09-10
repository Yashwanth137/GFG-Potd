# Circle of strings
#### [Question-Link](https://www.geeksforgeeks.org/problems/circle-of-strings4530/1)
#### Difficulty: Hard, Accuracy: 15.56%, Submissions: 70K+, Points: 8

Given an array arr of lowercase strings, determine if the strings can be chained together to form a circle.<br>
A string X can be chained together with another string Y if the last character of X is the same as the first character of Y. If every string of the array can be chained with exactly two strings of the array(one with the first character and the second with the last character of the string), it will form a circle.
<br>
For example, for the array arr[] = {"for", "geek", "rig", "kaf"} the answer will be Yes as the given strings can be chained as "for", "rig", "geek" and "kaf"

#### Examples
```
Input: arr[] = ["abc", "bcd", "cdf"]
Output: 0
Explanation: These strings can't form a circle because no string has 'd'at the starting index.
```
```
Input: arr[] = ["ab" , "bc", "cd", "da"]
Output: 1
Explanation: These strings can form a circle of strings.
```
```
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints: 
1 ≤ length of strings ≤ 20
```
