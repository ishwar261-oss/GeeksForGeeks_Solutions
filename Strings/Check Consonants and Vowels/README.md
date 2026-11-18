# GFG – Check Consonants and Vowels

**Difficulty:** Easy  
**Topics:** String, Counting

## Problem Statement

Given a string containing only lowercase English letters, count the number of vowels and consonants.

Return:
- `1` if vowels are greater than consonants.
- `-1` if vowels are fewer than consonants.
- `0` if both counts are equal.

## Approach

Traverse the string and maintain two counters:

- `vowels` – Counts the vowels (a, e, i, o, u).
- `consonants` – Counts all remaining characters.

After traversing the string, compare both counters and return the required result.

## Example

**Input:** `abab`

**Output:** `0`

**Explanation:**

- Vowels = 2
- Consonants = 2

Both counts are equal, so the answer is 0.

## Complexity Analysis

- **Time Complexity:** O(n) – Single traversal of the string.
- **Space Complexity:** O(1) – Constant extra space.

## Key Learnings

- String traversal.
- Character comparison.
- Counting vowels and consonants.
- Conditional statements and returning values.

**Pattern:** String + Counting.