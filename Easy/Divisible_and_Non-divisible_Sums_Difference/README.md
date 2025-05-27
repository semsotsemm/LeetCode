<h1 align="center">🟢2. Divisible and Non-divisible Sums Difference</h1>

<div align="center"> <strong>Status:</strong> ✅ Solved <br> <strong>Difficulty:</strong> 🟢 Easy <br> <strong>Topics:</strong> Math, Iteration <br> </div>

📝 Problem Description
> You are given positive integers n and m. Define two integers: > - num1: The sum of all integers in the range [1, n] that are not divisible by m. > - num2: The sum of all integers in the range [1, n] that are divisible by m. > > Return the integer num1 - num2.

✔️ The range of numbers is inclusive. <br>✔️ You need to calculate the sum for both divisible and non-divisible numbers. <br>✔️ The result is the difference between the two sums.

📌 Test Cases:
```C++
# Example 1:
Input: n = 10, m = 3
Output: 19

# Example 2:
Input: n = 5, m = 6
Output: 15

# Example 3:
Input: n = 5, m = 1
Output: -15
