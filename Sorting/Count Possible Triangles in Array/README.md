# Count Possible Triangles in Array

**Platform:** GeeksforGeeks  
**Difficulty:** Medium  
**Topic:** Sorting, Two Pointers, Arrays

## Problem Description

Given an integer array, count the number of triangles that can be formed using three different array elements as side lengths.

A valid triangle must satisfy the triangle inequality:

`a + b > c`

where `a`, `b`, and `c` are the three side lengths after sorting them in ascending order.

## Approach: Sorting + Two Pointers

1. Sort the array in ascending order.
2. Fix the largest side using a loop from the last index.
3. Initialize two pointers:
   - `left = 0`
   - `right = i - 1`
4. Check whether:

   `arr[left] + arr[right] > arr[i]`

5. If the condition is true:
   - All elements between `left` and `right` can form valid triangles with `arr[right]` and `arr[i]`.
   - Add `right - left` to the count.
   - Decrease `right`.
6. Otherwise, increase `left`.
7. Return the total count.

## Complexity Analysis

- **Time Complexity:** `O(n²)` – Sorting takes `O(n log n)` and the two-pointer traversal takes `O(n²)`.
- **Space Complexity:** `O(1)` auxiliary space, excluding sorting implementation overhead.

## Example

**Input:**
`[4, 6, 3, 7]`

**Sorted Array:**
`[3, 4, 6, 7]`

Valid triangles:
- `[3, 4, 6]`
- `[3, 6, 7]`
- `[4, 6, 7]`

**Output:** `3`

## Key Concepts Learned

- Array Sorting
- Two Pointer Technique
- Triangle Inequality
- Optimized Pair Counting

## Conclusion

Sorting and using two pointers reduces the brute-force `O(n³)` solution to `O(n²)`, making triangle counting more efficient.
