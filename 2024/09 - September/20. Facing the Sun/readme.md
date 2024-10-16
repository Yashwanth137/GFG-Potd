# Facing the sun
#### [Question-Link](https://www.geeksforgeeks.org/problems/facing-the-sun2126/1)
#### Difficulty: Easy, Accuracy: 45.54%, Submissions: 68K+, Points: 2

Given an array height representing the heights of buildings. You have to count the buildings that will see the sunrise (Assume the sun rises on the side of the array starting point).
<br>
Note: The height of the building should be strictly greater than the height of the buildings left in order to see the sun.

![image](https://github.com/user-attachments/assets/82784e41-0a2c-432a-844c-2ccd9b4e29eb)

#### Examples :
```
Input: height = [7, 4, 8, 2, 9]
Output: 3
Explanation: As 7 is the first element, it can see the sunrise. 4 can't see the sunrise as 7 is hiding it.
8 can see. 2 can't see the sunrise. 9 also can see
the sunrise.
```
```
Input: height = [2, 3, 4, 5]
Output: 4
Explanation: As 2 is the first element, it can see the sunrise.  3 can see the sunrise as 2 is not hiding it.
Same for 4 and 5, they also can see the sunrise.
```
```
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ height.size() ≤ 10^6
1 ≤ heighti ≤ 10^8
```
