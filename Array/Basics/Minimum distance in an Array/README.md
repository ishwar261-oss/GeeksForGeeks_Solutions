# Minimum distance in an Array

## Problem

Given an array `arr[]` and two integers `x` and `y`, find the minimum distance between any occurrence of `x` and any occurrence of `y`.

The distance between two elements is the difference between their indices.

Return `-1` if either `x` or `y` is not present in the array.

## Approach

Traverse the array once while keeping track of the most recent index of `x` or `y`.

Whenever we find `x` after `y`, or `y` after `x`, calculate the distance between their indices and update the minimum distance.

This avoids checking every possible pair.

## Example

Input:
arr[] = [1, 2, 3, 2, 1]
x = 1
y = 3

Output:
2

Explanation:

The closest pair is `1` at index `0` and `3` at index `2`.

Distance = `2 - 0 = 2`.

## Algorithm

1. Initialize `lastX = -1` and `lastY = -1`.
2. Initialize `minDist` to a large value.
3. Traverse the array.
4. If the current element is `x`, update `lastX`.
5. If the current element is `y`, update `lastY`.
6. If both `lastX` and `lastY` are valid, calculate:
   `abs(lastX - lastY)`
7. Update `minDist` with the smaller distance.
8. Return `minDist`.
9. If no valid pair exists, return `-1`.

## Key Idea

Only the **most recent occurrence** of `x` and `y` is needed because a closer pair can only be formed using the latest occurrence while scanning from left to right.

## Complexity

### Time Complexity

O(n)

### Space Complexity

O(1)

## Concepts Used

- Arrays
- Linear Traversal
- Index Tracking
- Minimum Value