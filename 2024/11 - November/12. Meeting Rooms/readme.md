# Meeting Rooms
#### [Question-Link](https://www.geeksforgeeks.org/problems/attend-all-meetings/1)
#### Difficulty: Medium, Accuracy: 71.0%, Submissions: 9K+, Points: 4

Given an array arr[][] such that arr[i][0] is the starting time of ith meeting and arr[i][1] is the ending time of ith meeting, the task is to check if it is possible for a person to attend all the meetings such that he can attend only one meeting at a particular time.
<br>
Note: A person can attend a meeting if its starting time is greater than or equal to the previous meeting's ending time.
<br>
#### Examples:
```
Input: arr[][] = [[1, 4], [10, 15], [7, 10]]
Output: true
Explanation: Since all the meetings are held at different times, it is possible to attend all the meetings.
```
```
Input: arr[][] = [[2, 4], [9, 12], [6, 10]]
Output: false
Explanation: It is not possible to attend the second and third meetings simultaneously.
```
```
Constraints:
1 ≤ arr.size() ≤ 10^5
0 ≤ arr[i] ≤ 2*10^6
```
