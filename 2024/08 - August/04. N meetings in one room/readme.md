# N meetings in one room
#### [Question-Link](https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1)
#### Difficulty: Easy, Accuracy: 45.3%, Submissions: 253K+, Points: 2
You are given timings of n meetings in the form of (start[i], end[i]) where start[i] is the start time of meeting i and end[i] is the finish time of meeting i. Return the maximum number of meetings that can be accommodated in a single meeting room, when only one meeting can be held in the meeting room at a particular time. 
<br>
Note: The start time of one chosen meeting can't be equal to the end time of the other chosen meeting.

#### Examples :
![image](https://github.com/user-attachments/assets/6540a1fe-aceb-4346-a597-689912e64dab)
Expected Time Complexity: O(n*logn)<br>
Expected Auxilliary Space: O(n)
<br>
Constraints:<br>
1 ≤ n ≤ 10^5<br>
0 ≤ start[i] < end[i] ≤ 10^6
