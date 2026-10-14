
# GFG: Subsequence with Sum K

## Problem
Given an array `arr[]` and an integer `k`, determine whether there exists a subsequence whose elements sum to exactly `k`.

Return `true` if such a subsequence exists; otherwise, return `false`.

## Example 1
Input: arr = [10, 1, 2, 7, 6, 1, 5], k = 8

Output: true

Explanation:
A valid subsequence is [2, 6], because 2 + 6 = 8.
Another valid subsequence is [1, 7].

## Example 2
Input: arr = [2, 3, 5, 7, 9], k = 100

Output: false

Explanation:
No subsequence has a sum equal to 100.

## Approach: Recursion (Pick / Not Pick)

### Key Idea
For every element, there are two choices:
1. Pick the element and subtract its value from `k`.
2. Do not pick the element and keep `k` unchanged.

If either choice finds a valid subsequence, return `true`.

## Base Cases
1. If `k == 0`, return `true` because the required sum has been reached.
2. If `n == 0` and `k != 0`, return `false` because no elements remain.

Note: These base cases assume all array elements are non-negative.

## Algorithm
1. Check whether `k == 0`. If yes, return `true`.
2. If no elements remain, return `false`.
3. If the current element is not greater than `k`, try picking it.
4. If picking does not work, try skipping it.
5. Return the result of either recursive choice.

## Complexity
- Time: O(2^n)
- Auxiliary Space: O(n), due to the recursion stack.

## Key Takeaway
Subsequence problems commonly use the pick/not-pick recursion pattern. Each element is either included or excluded, so all possible subsequences can be explored without changing the original array.
