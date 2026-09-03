# First and Second Smallest

## Problem

Given an array `arr[]`, find the smallest and second smallest elements in the array.

If the array does not contain two distinct elements, return `-1`.

## Approach

Maintain two variables:

- `first` → smallest element
- `second` → second smallest distinct element

Traverse the array once and update these two values whenever a smaller element is found.

## Example

Input:
arr[] = [12, 13, 1, 10, 34, 1]

Output:
[1, 10]

Explanation:

The smallest element is `1` and the second smallest distinct element is `10`.

## Algorithm

1. Initialize `first` and `second` to `INT_MAX`.
2. Traverse the array.
3. If the current element is smaller than `first`:
   - Move `first` to `second`.
   - Update `first`.
4. Otherwise, if it is smaller than `second` and different from `first`, update `second`.
5. If no second smallest element exists, return `-1`.
6. Otherwise, return `first` and `second`.

## Key Idea

Keep track of the two smallest **distinct** elements while traversing the array only once.

## Complexity

### Time Complexity

O(n)

### Space Complexity

O(1)

## Concepts Used

- Arrays
- Linear Traversal
- Comparison
- Variable Tracking
- `INT_MAX`
