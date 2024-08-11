# Job Sequencing Problem
#### [Question-Link](https://www.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1)
#### Difficulty: Medium, Accuracy: 34.51%, Submissions: 232K+, Points: 4
Given a set of n jobs where each jobi has a deadline and profit associated with it.
<br>
Each job takes 1 unit of time to complete and only one job can be scheduled at a time. We earn the profit associated with a job if and only if the job is completed by its deadline.
<br>
Find the number of jobs done and the maximum profit.
<br>
Note: Jobs will be given in the form (Jobid, Deadline, Profit) associated with that Job. Deadline of the job is the time on or before which job needs to be completed to earn the profit.

#### Examples :
![image](https://github.com/user-attachments/assets/5aa5aaf4-f7c1-46c8-bbcf-2590199e2741)
#### Expected Time Complexity: O(nlogn)
#### Expected Auxilliary Space: O(n)

#### Constraints:
#### 1 <= n <= 10^5
#### 1 <= Deadline,id <= n
#### 1 <= Profit <= 500
