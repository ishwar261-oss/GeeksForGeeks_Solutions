# Next Permutation

## Problem
Given an array of integers representing a permutation, rearrange the array into its next lexicographically greater permutation.

If no greater permutation exists, rearrange the array into ascending order (the lowest permutation).

## Approach: Pivot and Reverse

1. Traverse the array from right to left to find the first element smaller than the next element. This is the pivot.
2. Traverse from right to left again and find the first element greater than the pivot.
3. Swap the pivot with that element.
4. Reverse all elements after the pivot to obtain the smallest possible order.
5. If no pivot is found, reverse the entire array.

## Complexity Analysis

- **Time Complexity:** O(n) – Finding the pivot, finding the next greater element, and reversing the array take linear time.
- **Space Complexity:** O(1) – The array is modified in place without using extra space.

## Example

**Input:** `[2, 4, 1, 7, 5, 0]`

**Output:** `[2, 4, 5, 0, 1, 7]`

## Key Concept
The solution uses array traversal, swapping, and reversing to generate the next lexicographically greater permutation efficiently.