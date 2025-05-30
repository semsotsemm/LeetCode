<h1 align="center">🔴 Maximize the Number of Target Nodes After Connecting Trees II</h1>

<div align="center"> <strong>Status:</strong> ✅ Solved <br> <strong>Difficulty:</strong> 🔴Hard <br> <strong>Topics:</strong> Graphs, Trees<br> </div>

📝 Problem Description
> You are given two undirected trees with n and m nodes, labeled from [0, n - 1] and [0, m - 1], respectively.

✔️ Each tree is represented by its edges:

edges1[i] = [a_i, b_i] connects nodes a_i and b_i in the first tree.

edges2[i] = [u_i, v_i] connects nodes u_i and v_i in the second tree.

✔️ A node u is considered target to node v if the number of edges on the path from u to v is even. A node is always target to itself. <br>
✔️ You can connect one node from the first tree to another node in the second tree. <br>
✔️ Return an array answer where answer[i] is the maximum possible number of nodes target to node i of the first tree. <br>
✔️ Queries are independent, meaning any added connection is removed before processing the next query.

📌 Test Cases:
```C++
# Example 1:
Input: edges1 = [[0,1],[0,2],[2,3],[2,4]], edges2 = [[0,1],[0,2],[0,3],[2,7],[1,4],[4,5],[4,6]]
Output: [8,7,7,8,8]

# Example 2:
Input: edges1 = [[0,1],[0,2],[0,3],[0,4]], edges2 = [[0,1],[1,2],[2,3]]
Output: [3,6,6,6,6]
Constraints:

2 <= n, m <= 10^5

edges1.length == n - 1, edges2.length == m - 1

The input guarantees that both edges1 and edges2 form valid trees.
