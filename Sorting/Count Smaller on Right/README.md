# Count Smaller on Right

**Difficulty:** Hard  
**Topics:** Array, Merge Sort, Divide and Conquer

## Problem Statement

Given an array of non-negative integers, return an array where each element represents the number of smaller elements present to its right in the original array.

## Approach: Modified Merge Sort

The problem can be optimized using a modified Merge Sort algorithm.

Instead of checking every element on the right side, we count smaller elements during the merging process.

### Algorithm

1. Create an index array to maintain the original positions of elements.
2. Divide the array into two halves recursively.
3. Sort both halves using Merge Sort.
4. During merging, count how many elements from the right half are smaller than the current element in the left half.
5. Add this count to the corresponding original index in the result array.
6. Continue until the entire array is merged.

### Why Use an Index Array?

Merge Sort changes the order of elements. Maintaining original indices ensures that every count is stored at the correct position in the result array.

## Example

**Input:**
`[12, 1, 2, 3, 0, 11, 4]`

**Output:**
`[6, 1, 1, 1, 0, 1, 0]`

## Complexity Analysis

- **Time Complexity:** O(n log n) – Merge Sort divides and merges the array efficiently.
- **Space Complexity:** O(n) – Additional arrays are used for indices, counts, and merging.

## Key Learnings

- Understanding the Merge Sort algorithm.
- Applying Divide and Conquer to counting problems.
- Maintaining original indices while sorting.
- Optimizing nested-loop solutions from O(n²) to O(n log n).

## Important Concept

Modified Merge Sort can solve problems that require counting smaller elements across different halves during merging.

**Pattern:** Merge Sort + Counting + Original Indices.