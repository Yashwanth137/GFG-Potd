# Minimum number of deletions and insertions
#### [Question-Link](https://www.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1)
#### Difficulty: Medium, Accuracy: 65.29%, Submissions: 60K+, Points: 4

Given two strings str1 and str2. The task is to remove or insert the minimum number of characters from/in str1 to transform it into str2. The same character must be removed/deleted from one point of str1 and inserted into another point.

#### Examples :
```
Input: str1 = "heap", str2 = "pea"
Output: 3
Explanation: 2 deletions and 1 insertion.
p and h deleted from heap. Then, p is inserted at the beginning.
One thing to note is that though p was required, it was removed/deleted first
from its position and then inserted into another position.
Thus, p contributes one to the deletion_count and one to the insertion_count.
```
```
Input : str1 = "geeksforgeeks", str2 = "geeks"
Output: 8
Explanation: 8 deletions, i.e. remove all characters of the string "forgeeks".
```
```
Expected Time Complexity: O(|str1|*|str2|)
Expected Space Complexity: O(|str1|*|str2|)

Constraints:
1 ≤ |str1|, |str2| ≤ 1000
All the characters are lowercase English alphabets
```
