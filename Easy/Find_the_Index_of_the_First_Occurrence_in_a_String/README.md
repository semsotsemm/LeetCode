<h1 align="center">🟢Find the Index of the First Occurrence in a String</h1>

<div align="center"> <strong>Status:</strong> ✅ Solved <br> <strong>Difficulty:</strong> 🟢Easy <br> <strong>Topics:</strong> String, Search <br> </div>

📝 Problem Description > Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

✔️ The search must be case-sensitive. <br> ✔️ If needle is an empty string, return 0 by default. <br> ✔️ Strings consist of lowercase English letters.

📌 Test Cases:

```C++
# Example 1:
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.

# Example 2:
Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
