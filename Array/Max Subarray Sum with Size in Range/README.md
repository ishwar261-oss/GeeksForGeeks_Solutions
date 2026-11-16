# Max Subarray Sum with Size in Range

**Difficulty:** Hard  
**Topic:** Prefix Sum, Monotonic Deque, Sliding Window  
**Language:** C++

## Problem Description

Given an integer array `arr` and two integers `a` and `b`, find the maximum sum of a contiguous subarray whose length is at least `a` and at most `b`.

## Approach: Prefix Sum + Monotonic Deque

1. Calculate the prefix sum array.
2. Iterate through possible ending positions of subarrays.
3. Maintain valid starting indices using a deque.
4. Keep the prefix sums in increasing order inside the deque.
5. Remove outdated indices that violate the maximum length `b`.
6. Calculate the maximum sum using:

   `prefix[i] - prefix[dq.front()]`

7. Return the maximum subarray sum.


## Complexity Analysis

- **Time Complexity:** O(n) — Each index is inserted and removed from the deque at most once.
- **Space Complexity:** O(n) — Prefix sum array and deque.

## Key Learnings

- Understanding prefix sums.
- Using monotonic deque for minimum prefix sum.
- Applying sliding window constraints.
- Optimizing brute-force subarray problems.
- Maintaining valid indices efficiently.

**Problem Link:** https://www.geeksforgeeks.org/problems/max-subarray-sum-with-size-in-range/1