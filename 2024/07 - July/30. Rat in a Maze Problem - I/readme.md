# Rat in a Maze Problem - I
#### [Question-Link](https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1)
#### Difficulty: MediumAccuracy: 35.75%Submissions: 272K+Points: 4
Consider a rat placed at (0, 0) in a square matrix mat of order n* n. It has to reach the destination at (n - 1, n - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
  
  Note: In a path, no cell can be visited more than one time. If the source cell is 0, the rat cannot move to any other cell. In case of no path, return an empty list. The driver will output "-1" automatically.

#### Examples:
![image](https://github.com/user-attachments/assets/064daf27-e583-453c-a828-0c54bb6dc5fb)
#### Expected Time Complexity: O(3^(n^2))
#### Expected Auxiliary Space: O(l * x)
Here l = length of the path, x = number of paths.

#### Constraints:
2 ≤ n ≤ 5
  0 ≤ mat[i][j] ≤ 1
