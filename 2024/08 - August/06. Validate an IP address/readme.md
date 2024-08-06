# Validate an IP Address
#### [Question-Link](https://www.geeksforgeeks.org/problems/validate-an-ip-address-1587115621/1)
#### Difficulty: Medium, Accuracy: 11.22%, Submissions: 264K+, Points: 4
You are given a string str in the form of an IPv4 Address. Your task is to validate an IPv4 Address, if it is valid return true otherwise return false.
<br>
IPv4 addresses are canonically represented in dot-decimal notation, which consists of four decimal numbers, each ranging from 0 to 255, separated by dots, e.g., 172.16.254.1
<br>
A valid IPv4 Address is of the form x1.x2.x3.x4 where 0 <= (x1, x2, x3, x4) <= 255. Thus, we can write the generalized form of an IPv4 address as (0-255).(0-255).(0-255).(0-255)
<br>
Note: Here we are considering numbers only from 0 to 255 and any additional leading zeroes will be considered invalid.

#### Examples :
![image](https://github.com/user-attachments/assets/e45332f9-4566-4209-9b22-554ec3dd6e11)
#### Expected Time Complexity: O(n)
#### Expected Auxiliary Space: O(1)

#### Constraints:
#### 1<=str.length() <=15
