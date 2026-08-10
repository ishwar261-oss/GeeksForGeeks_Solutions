# Palindrome String

## Problem

Given a string, check whether it is a **palindrome**.

A palindrome is a string that reads the same from **left to right** and **right to left**.

---

## Examples

### Example 1

```text
Input:
madam

Output:
true
```

Because:

```text
madam
←   →
madam
```

The string is the same in both directions.

---

### Example 2

```text
Input:
hello

Output:
false
```

Because:

```text
hello
olleh
```

They are different.

---

## Approach

Use the **two-pointer** approach.

Create two pointers:

```text
left  → first character
right → last character
```

Compare:

```text
str[left] == str[right]
```

If they are equal:

```text
left++;
right--;
```

Continue until:

```text
left >= right
```

If any pair is different, the string is not a palindrome.

---

## Algorithm

1. Set `left = 0`.
2. Set `right = str.length() - 1`.
3. Compare the characters at `left` and `right`.
4. If they are different, return `false`.
5. Move `left` forward.
6. Move `right` backward.
7. Continue until the pointers meet.
8. Return `true`.

---

## C++ Code

```cpp
class Solution {
public:
    bool isPalindrome(string& s) {

        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            if (s[left] != s[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
```

---

## Example Dry Run

For:

```text
s = "madam"
```

Compare:

```text
m == m   ✓
a == a   ✓
d == d   ✓
```

All characters match.

Therefore:

```text
true
```

---

## Complexity

### Time Complexity

```text
O(n)
```

We check each character at most once.

### Space Complexity

```text
O(1)
```

No extra string or array is required.

---

## Concepts Used

- Strings
- Two Pointers
- Character Comparison

---

## Key Idea

A string is a palindrome if:

```text
first character == last character
second character == second-last character
...
```

If all pairs match:

```text
Palindrome → true
```

Otherwise:

```text
Not Palindrome → false
```

---

## Tags

`String` `Palindrome` `Two Pointers` `Easy`