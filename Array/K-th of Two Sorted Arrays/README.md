# K-th of Two Sorted Arrays

**Difficulty:** Medium  
**Accuracy:** 37.4%  
**Points:** 4

## Problem Statement

Given two sorted arrays `a[]` and `b[]` and an integer `k`, find the element that would appear at the kth position in the combined sorted array.

The position is 1-based.

## Approach

**Binary Search on Partition**

- Always perform binary search on the smaller array to reduce the search space.
- Divide both arrays into left and right partitions.
- Make sure the total number of elements in the left partitions is exactly `k`.
- Check whether the largest element on the left side of each array is smaller than or equal to the smallest element on the right side of the other array.
- If the partition is correct, return the maximum element from the left partitions.
- Otherwise, adjust the binary search range until the correct partition is found.

## Complexity Analysis

- **Time Complexity:** O(log(min(n, m))), where n and m are the sizes of the two arrays.
- **Space Complexity:** O(1), because no extra array or data structure is used.

## Key Concepts

- Binary Search
- Two Pointers / Partitioning
- Sorted Arrays