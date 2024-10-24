# Two Swaps
#### Difficulty: Easy, Accuracy: 49.85%, Submissions: 27K+, Points: 2

Given a permutation of some of the first natural numbers in an array arr[], determine if the array can be sorted in exactly two swaps. A swap can involve the same pair of indices twice.
<br>
Return true if it is possible to sort the array with exactly two swaps, otherwise return false.

#### Examples:
```
Input: arr = [4, 3, 2, 1]
Output: true
Explanation: Swap arr[0] and arr[3]. The array becomes [1, 3, 2, 4]. Then, swap arr[1] and arr[2].
The array becomes [1, 2, 3, 4], which is sorted.
```
```
Input: arr = [4, 3, 1, 2]
Output: false
Explanation: It is impossible to sort the array with exactly two swaps.
```
```
Constraints:
1 ≤ arr.size() ≤ 10^6
1 ≤ arr[i] ≤ arr.size()
```