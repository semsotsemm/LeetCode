<h1 align="center">🔴Candy Distribution</h1>

<div align="center"> <strong>Status:</strong> ✅ Solved <br> <strong>Difficulty:</strong> 🔴Hard <br> <strong>Topics:</strong> Greedy, Arrays <br> </div>

📝 Problem Description
> There are n children standing in a line, each assigned a rating given in the integer array ratings.

✔️Each child must receive at least one candy. <br>
✔️Children with a higher rating must receive more candies than their adjacent neighbors.<br>
✔️ Return the minimum number of candies needed for distribution.<br>

⏳ Constraints:
n == ratings.length

1 <= n <= 2 * 10^4

0 <= ratings[i] <= 2 * 10^4

📌 Test Cases:
```C++
// Example 1:
Input: ratings = [1,0,2]
Output: 5
Explanation: You can allocate candies as [2,1,2].

// Example 2:
Input: ratings = [1,2,2]
Output: 4
Explanation: You can allocate candies as [1,2,1].
The third child gets only 1 candy because they do not have a higher rating than their neighbor.
