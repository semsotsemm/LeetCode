<h1 align="center">🟢Valid Parentheses</h1>

<div align="center">
  <strong>Status:</strong> ✅ Solved  <br>
  <strong>Difficulty:</strong> 🟢Easy  <br>
  <strong>Topics:</strong> Stack, String  <br>
</div>

---

### 📝 Problem Description
> Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'`, determine if the input string is **valid**.

✔️ Open brackets must be closed by the **same type** of brackets.  
✔️ Open brackets must be closed in the **correct order**.  
✔️ Every closing bracket must have a **corresponding open bracket** of the same type.

---

### 📌 Test Cases:
```C++
# Example 1:
Input: s = "()"
Output: true

# Example 2:
Input: s = "()[]{}"
Output: true

# Example 3:
Input: s = "(]"
Output: false

# Example 4:
Input: s = "([])"
Output: true
