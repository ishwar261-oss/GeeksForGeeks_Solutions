# Left Smaller Right Greater

## Problem

Given an array `arr[]`, find an element such that:

- All elements to its left are smaller than it.
- All elements to its right are greater than it.

Return the first such element if it exists. Otherwise, return `-1`.

The first and last elements cannot be the answer because they do not have elements on both sides.

## Approach

Use two pieces of information:

- `leftMax` → maximum element found on the left.
- `rightMin[i]` → minimum element from index `i` to the end.

First, build the `rightMin` array by traversing from right to left.

Then traverse the array from left to right. For every element `arr[i]`, check:

`arr[i] > leftMax`

and

`arr[i] < rightMin[i + 1]`

If both conditions are true, `arr[i]` satisfies the requirement.

## Example

Input:
arr[] = [4, 2, 5, 7]

Output:
5

Explanation:

For `5`:
- Elements on the left are `4` and `2`, both smaller than `5`.
- Element on the right is `7`, which is greater than `5`.

Therefore, `5` is the required element.

## Algorithm

1. Create a `rightMin` array.
2. Set the last element of `rightMin`.
3. Traverse from right to left and store the minimum value from each position to the end.
4. Initialize `leftMax` with the first element.
5. Traverse from index `1` to `n - 2`.
6. Check whether:
   - `arr[i] > leftMax`
   - `arr[i] < rightMin[i + 1]`
7. If both conditions are satisfied, return `arr[i]`.
8. Update `leftMax`.
9. If no element satisfies the conditions, return `-1`.

## Key Idea

For every element, we need to know:

- the largest value on its left
- the smallest value on its right

If the current element is greater than the left maximum and smaller than the right minimum, it is the required element.

## Complexity

### Time Complexity

O(n)

### Space Complexity

O(n)

## Concepts Used

- Arrays
- Prefix Maximum
- Suffix Minimum
- Linear Traversal
- Comparison