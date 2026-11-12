# Minimum Swaps to Sort

## Problem
Given an array of distinct elements, find the minimum number of swaps required to sort the array in strictly increasing order.

## Approach: Cycle Detection

We use sorting and cycle detection to calculate the minimum swaps.

### Algorithm

1. Create a vector of pairs containing each element and its original index.
2. Sort the vector based on element values.
3. Create a `visited` array to track processed indices.
4. Traverse the sorted vector.
5. If an element is already visited or is already at its correct position, skip it.
6. Otherwise, find the cycle by following the original indices.
7. A cycle of size `k` requires `k - 1` swaps.
8. Add the swaps from every cycle and return the answer.

## Example

**Input:**
`arr = [10, 19, 6, 3, 5]`

**Sorted array:**
`[3, 5, 6, 10, 19]`

Two cycles are formed, each requiring one swap.

**Output:** `2`

## Complexity Analysis

- **Time Complexity:** O(n log n) – Sorting the elements takes O(n log n), and cycle detection takes O(n).
- **Space Complexity:** O(n) – Extra space is used for pairs and the visited array.

## Key Learning

This problem demonstrates the Cycle Detection technique.

**Important Formula:**

Minimum swaps required for a cycle = `Cycle Size - 1`

The minimum number of swaps is the sum of swaps required by all cycles.
