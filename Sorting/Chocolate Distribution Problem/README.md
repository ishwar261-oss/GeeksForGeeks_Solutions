# Chocolate Distribution Problem

## Problem
Given an array `arr[]`, where each element represents the number of chocolates in a packet, distribute exactly one packet to each of the `m` students.

Minimize the difference between the maximum and minimum number of chocolates received.

## Approach
1. Sort the array in ascending order.
2. Consider every consecutive group of `m` packets.
3. Calculate the difference between the last and first elements of each group.
4. Return the minimum difference.

## Example

Input:
arr = [3, 4, 1, 9, 56, 7, 9, 12]
m = 5

Output:
6

Explanation:
After sorting:
[1, 3, 4, 7, 9, 9, 12, 56]

Possible best group:
[3, 4, 7, 9, 9]

Difference = 9 - 3 = 6.

## Algorithm
1. Store the array size in `n`.
2. If `m > n`, return -1.
3. Sort the array.
4. Initialize `ans = INT_MAX`.
5. Traverse the array while a complete group of `m` packets is available.
6. Calculate `a[i + m - 1] - a[i]`.
7. Update `ans` with the minimum difference.
8. Return `ans`.

## Key Idea
After sorting, the minimum difference for any group of `m` packets can be found by checking consecutive elements.

## Complexity Analysis
- Time Complexity: O(n log n)
- Auxiliary Space Complexity: O(log n) typically for sorting with C++ `sort()`.

## Concepts Used
- Arrays
- Sorting
- Sliding Window
- Greedy Approach
- STL: `sort()`, `min()`