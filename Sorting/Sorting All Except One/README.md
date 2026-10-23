# Sorting All Except One

## Problem
Sort an array in ascending order while keeping the element at index `k` in its original position.

## Approach
1. Create a temporary vector.
2. Copy all elements except the element at index `k`.
3. Sort the temporary vector in ascending order.
4. Place the sorted elements back into the original array, skipping index `k`.

## Example
Input: arr = [10, 4, 11, 7, 6, 20], k = 2

Output: [4, 6, 11, 7, 10, 20]

Explanation:
The element 11 at index 2 remains fixed.
All other elements are sorted in ascending order.

## Algorithm
1. Initialize an empty vector `temp`.
2. Traverse `arr` and add every element except `arr[k]` to `temp`.
3. Sort `temp`.
4. Traverse `arr` again and fill every position except `k` with elements from `temp`.

## Complexity Analysis
- Time Complexity: O(n log n)
- Auxiliary Space: O(n)

## Key Concepts
- Vectors
- Array traversal
- Sorting
- Conditional statements