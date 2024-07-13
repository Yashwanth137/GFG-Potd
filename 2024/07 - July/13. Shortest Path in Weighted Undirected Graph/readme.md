# Shortest Path in Weighted undirected graph
#### [Question-Link](https://www.geeksforgeeks.org/problems/shortest-path-in-weighted-undirected-graph/1)
#### Difficulty: Medium, Accuracy: 50.0%, Submissions: 53K+, Points: 4
You are given a weighted undirected graph having n vertices numbered from 1 to n and m edges along with their weights. Find the shortest path between the vertex 1 and the vertex n,  if there exists a path, and return a list of integers whose first element is the weight of the path, and the rest consist of the nodes on that path. If no path exists, then return a list containing a single element -1.
<br>
The input list of edges is as follows - {a, b, w}, denoting there is an edge between a and b, and w is the weight of that edge.
<br>
Note: The driver code here will first check if the weight of the path returned is equal to the sum of the weights along the nodes on that path, if equal it will output the weight of the path, else -2. In case the list contains only a single element (-1) it will simply output -1. 

#### Examples :
![image](https://github.com/user-attachments/assets/48663477-487d-4fa8-97f1-d8c70972647e)

#### Expected Time Complexity: O(m* log(n))
#### Expected Space Complexity: O(n+m)

#### Constraint:
#### 2 <= n <= 10^6
#### 0 <= m <= 10^6
#### 1 <= a, b <= n
#### 1 <= w <= 10^5
