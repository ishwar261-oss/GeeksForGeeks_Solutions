# GFG – Rearrange Array Alternately

**Difficulty:** Medium  
**Topics:** Array, Two Pointers, Mathematics

## Problem Statement

Given a sorted array of non-negative integers, rearrange its elements alternately.

The rearranged array should contain:

- First element: Maximum element.
- Second element: Minimum element.
- Third element: Second maximum element.
- Fourth element: Second minimum element.
- Continue this pattern until all elements are rearranged.

Modify the original array without returning a new array.

## Approach: Two Pointers + Encoding

We use two pointers to track the maximum and minimum elements.

- `maxIdx` points to the last index.
- `minIdx` points to the first index.

We use an encoding technique to store both the original and rearranged values in the same array element.

The maximum element plus one is used as a base value.

### Algorithm

1. Initialize the maximum pointer at the last index.
2. Initialize the minimum pointer at the first index.
3. Traverse the array.
4. At even indices, select the maximum element and move the maximum pointer backward.
5. At odd indices, select the minimum element and move the minimum pointer forward.
6. Encode the selected values into the original array.
7. Divide every element by the base value to extract the rearranged array.

## Example

**Input:** `[1, 2, 3, 4, 5, 6]`

**Output:** `[6, 1, 5, 2, 4, 3]`

## Complexity Analysis

- **Time Complexity:** O(n) – Two linear traversals.
- **Space Complexity:** O(1) – Rearrangement is performed in the original array.

## Key Learnings

- Two-pointer technique.
- Alternating traversal.
- In-place array manipulation.
- Encoding two values into a single array element.

**Pattern:** Two Pointers + In-place Encoding.