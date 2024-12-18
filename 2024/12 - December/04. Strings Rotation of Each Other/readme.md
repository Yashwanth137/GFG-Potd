# Strings Rotations of Each Other
#### [Question-Link](https://www.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1)
#### Difficulty: Easy, Accuracy: 43.83%, Submissions: 202K+, Points: 2

You are given two strings of equal lengths, s1 and s2. The task is to check if s2 is a rotated version of the string s1.
<br><br>
Note: The characters in the strings are in lowercase.

#### Examples :
```
Input: s1 = "abcd", s2 = "cdab"
Output: true
Explanation: After 2 right rotations, s1 will become equal to s2.
```
```
Input: s1 = "aab", s2 = "aba"
Output: true
Explanation: After 1 left rotation, s1 will become equal to s2.
```
```
Input: s1 = "abcd", s2 = "acbd"
Output: false
Explanation: Strings are not rotations of each other.
```
```
Constraints:
1 <= s1.size(), s2.size() <= 10^5
```