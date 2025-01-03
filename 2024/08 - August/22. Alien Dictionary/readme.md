# Alien Dictionary
#### [Question-Link](https://www.geeksforgeeks.org/problems/alien-dictionary/1)
#### Difficulty: HardAccuracy: 47.81%Submissions: 128K+Points: 8

Given a sorted dictionary of an alien language having N words and k starting alphabets of standard dictionary. Find the order of characters in the alien language.<br>
Note:<br>
Many orders may be possible for a particular test case, thus you may return any valid order and output will be 1 if the order of string returned by the function is correct else 0 denoting incorrect string returned.
<br>
#### Examples :
```
Input:  n = 5, k = 4, dict = {"baa","abcd","abca","cab","cad"}
Output: 1
Explanation: Here order of characters is 'b', 'd', 'a', 'c'
Note that words are sorted and in the given language "baa" comes before "abcd",
therefore 'b' is before 'a' in output.
Similarly we can find other orders.
```
```
Input: n = 3, k = 3, dict = {"caa","aaa","aab"}
Output: 1
Explanation: Here order of characters is 'c', 'a', 'b'
Note that words are sorted and in the given language "caa" comes before "aaa",
therefore 'c' is before 'a' in output.
Similarly we can find other orders.
```
#### Expected Time Complexity: O(n * |s| + k)
#### Expected Auxillary Space: O(k)

#### Constraints:
```
1 ≤ n≤ 10^4
1 ≤ k ≤ 26
1 ≤ Length of words ≤ 50
```
