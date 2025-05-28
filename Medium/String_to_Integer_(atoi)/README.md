<h1 align="center">🟡8. String to Integer (atoi)</h1>

<div align="center"> 
<strong>Status:</strong> ✅ Solved <br> 
<strong>Difficulty:</strong> 🟡Medium <br> 
<strong>Topics:</strong> String, Math <br> 
</div>

📝 Problem Description
> Implement the `myAtoi(string s)` function, which converts a string to a 32-bit signed integer.

✔️ Ignore leading whitespace characters. <br>
✔️ Determine the sign (`+` or `-`), assuming positivity if neither is present. <br>
✔️ Read the integer until a non-digit character is encountered or the end of the string is reached. <br>
✔️ If the integer exceeds the range [-2³¹, 2³¹ - 1], clamp it within this range.

📌 Test Cases:
```C++
# Example 1:
Input: s = "42"
Output: 42

# Example 2:
Input: s = "   -042"
Output: -42

# Example 3:
Input: s = "1337c0d3"
Output: 1337

# Example 4:
Input: s = "0-1"
Output: 0

# Example 5:
Input: s = "words and 987"
Output: 0
