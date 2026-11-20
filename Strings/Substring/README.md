# GFG – Substring

**Difficulty:** Easy  
**Topics:** String, String Manipulation

## Problem Statement

Given a string `s` and two integers `l` and `r`, extract and return the characters from index `l` to index `r` (both inclusive).

The string uses zero-based indexing.

## Approach: Using substr()

C++ provides a built-in function called `substr()` to extract a portion of a string.

The function accepts two arguments:

- Starting index: `l`
- Number of characters: `r - l + 1`

The extra 1 is required because both starting and ending indices are inclusive.

## Example

**Input:**
`s = "geeksforgeeks", l = 0, r = 4`

**Output:**
`"geeks"`

**Explanation:**

Extracting characters from index 0 to index 4 gives the substring `"geeks"`.

## Complexity Analysis

- **Time Complexity:** O(r - l + 1) – Extracting the required characters.
- **Space Complexity:** O(r - l + 1) – Storing the resulting substring.

## Key Learnings

- Understanding zero-based string indexing.
- Using the C++ `substr()` function.
- Extracting characters from a given range.
- Understanding inclusive starting and ending indices.

**Pattern:** String + Substring.