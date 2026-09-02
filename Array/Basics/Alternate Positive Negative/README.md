# Minimum Distance in an Array

## Problem

Given an array `arr[]` and two integers `x` and `y`, find the minimum distance between any occurrence of `x` and any occurrence of `y`.

The distance between two elements is the difference between their indices.

Return `-1` if either `x` or `y` does not occur in the array.

## Approach

Traverse the array once and keep track of the most recent index where either `x` or `y` was found.

Whenever the current element is different from the element at the previous stored index, calculate the distance between their indices.

Keep updating the minimum distance.

## Example

Input:
arr[] = [1, 2, 3, 2, 1]
x = 1
y = 3

Output:
2

Explanation:

`1` occurs at index `0` and `3` occurs at index `2`.

Minimum distance = `2 - 0 = 2`.

## Algorithm

1. Initialize `last = -1`.
2. Initialize `ans = INT_MAX`.
3. Traverse the array.
4. If the current element is `x` or `y`:
   - If `last` is valid and the current element is different from `arr[last]`, calculate the distance.
   - Update `ans` with the minimum distance.
   - Update `last` to the current index.
5. If `ans` is still `INT_MAX`, return `-1`.
6. Otherwise, return `ans`.

## Key Idea

Only the **most recent occurrence** of `x` or `y` is needed.

When we find the other value, the distance between these two latest occurrences is the smallest possible distance involving the current element.

## Complexity

### Time Complexity

O(n)

### Space Complexity

O(1)

## Concepts Used

- Arrays
- Linear Traversal
- Index Tracking
- Minimum Distance
- Conditional Statements