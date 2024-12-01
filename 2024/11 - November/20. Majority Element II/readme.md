# Majority Element II
#### [Question-Link](https://www.geeksforgeeks.org/problems/majority-vote/1)
#### Difficulty: Medium, Accuracy: 48.1%, Submissions: 84K+, Points: 4

You are given an array of integer arr[] where each number represents a vote to a candidate. Return the candidates that have votes greater than one-third of the total votes, If there's not a majority vote, return an empty array. 
<br><br>
Note: The answer should be returned in an increasing format.

#### Examples:
```
Input: arr[] = [2, 1, 5, 5, 5, 5, 6, 6, 6, 6, 6]
Output: [5, 6]
Explanation: 5 and 6 occur more n/3 times.
```
```
Input: arr[] = [1, 2, 3, 4, 5]
Output: []
Explanation: no candidate occur more than n/3 times.
```
```
Constraint:
1 <= arr.size() <= 10^6
-109 <= arr[i] <= 10^9
```