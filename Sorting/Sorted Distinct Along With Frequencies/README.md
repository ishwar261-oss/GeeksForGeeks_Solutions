# Sorted Distinct Along With Frequencies

**Difficulty:** Basic

## Problem
Given an integer array `arr`, return all distinct elements in increasing order along with their frequencies.

## Approach: Sorting

1. Sort the array in ascending order.
2. Traverse the sorted array.
3. Count consecutive occurrences of each element.
4. Store each distinct element and its frequency as `{element, frequency}`.
5. Return the result.

## Example

**Input:**
arr = [3, 3, 2, 2, 1, 4]

**Step 1: Sort the array**
[1, 2, 2, 3, 3, 4]

**Step 2: Count frequencies**
- 1 → 1 time
- 2 → 2 times
- 3 → 2 times
- 4 → 1 time

**Output:**
[[1, 1], [2, 2], [3, 2], [4, 1]]

## Algorithm

1. Sort `arr`.
2. Initialize an empty result vector.
3. Start traversing the array from index `0`.
4. Count consecutive equal elements.
5. Add `{element, frequency}` to the result.
6. Continue until all elements are processed.
7. Return the result.

## Key Idea
Sorting places equal elements together, making it easy to count their frequencies without using a map or hash table.

## Complexity Analysis
- **Time Complexity:** O(n log n) — sorting the array.
- **Auxiliary Space:** O(1) excluding sorting space and the output vector.

## Concepts Used
- Arrays
- Sorting
- Frequency Counting
- Two Pointers