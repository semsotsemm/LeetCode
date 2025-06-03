<h1 align="center">🟢Remove Duplicates from Sorted Array</h1>

<div align="center"> <strong>Status:</strong> ✅ Solved <br> <strong>Difficulty:</strong> 🟢Easy <br> <strong>Topics:</strong> Array, Two Pointers <br> </div>

📝 Problem Description > Given a sorted integer array nums, remove the duplicates in-place, ensuring each unique element appears only once, while maintaining the relative order. Then, return the number of unique elements.

✔️ The operation must be performed in-place, meaning the existing array should be modified. <br>
✔️ The remaining elements after the unique ones do not matter.<br>
✔️ Return the count k of unique elements in the array.

📌 Test Cases:

```C++
// Example 1:
Input: nums = [1, 1, 2]
Output: 2
Explanation: The modified nums becomes [1, 2, _] with k = 2.

// Example 2:
Input: nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
Output: 5
Explanation: The modified nums becomes [0, 1, 2, 3, 4, _, _, _, _, _] with k = 5.
