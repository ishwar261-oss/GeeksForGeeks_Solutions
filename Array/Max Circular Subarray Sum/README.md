# Max Circular Subarray Sum

**Difficulty:** Hard

**Topics:** Array, Kadane's Algorithm

## Problem Statement

Given a circular array of integers, find the maximum possible sum of a non-empty subarray.

A circular subarray can wrap around from the end of the array to the beginning.

## Approach: Kadane's Algorithm

There are two possible cases:

### 1. Normal Maximum Subarray

Use Kadane's Algorithm to find the maximum subarray sum.

### 2. Circular Maximum Subarray

Find the minimum subarray sum using Kadane's Algorithm.

The circular maximum sum can be calculated by:

**Circular Sum = Total Array Sum - Minimum Subarray Sum**

### Final Answer

Take the maximum of both cases:

**Answer = max(Maximum Subarray Sum, Circular Sum)**

### Special Case

If all array elements are negative, return the maximum element.

This prevents an incorrect answer of zero or an empty subarray.

## Complexity Analysis

- **Time Complexity:** O(n) – The array is traversed once.
- **Space Complexity:** O(1) – Only constant extra space is used.

## Key Concepts Learned

- Kadane's Algorithm
- Maximum Subarray Sum
- Minimum Subarray Sum
- Circular Array
- Array Traversal

## GeeksforGeeks

[Max Circular Subarray Sum](https://www.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1)