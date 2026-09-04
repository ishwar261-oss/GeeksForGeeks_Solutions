# Convert To Zig-Zag

## Problem

Given an array `arr[]`, rearrange its elements so that the array follows a zig-zag pattern:

`arr[0] < arr[1] > arr[2] < arr[3] > ...`

The relative order of the elements does not need to be preserved.

## Approach

Traverse the array from left to right.

For every adjacent pair:

- At an even index, we need `arr[i] < arr[i + 1]`.
- At an odd index, we need `arr[i] > arr[i + 1]`.

If the required condition is not satisfied, swap the two elements.

After each swap, the current position is fixed, so we can continue to the next pair.

## Example

Input:
arr[] = [4, 3, 7, 8, 6, 2, 1]

Output:
[3, 4, 7, 8, 2, 6, 1]

Explanation:

The resulting array follows:

`3 < 4 > 7 < 8 > 2 < 6 > 1`

Therefore, it satisfies the zig-zag pattern.

## Algorithm

1. Traverse the array from index `0` to `n - 2`.
2. If `i` is even:
   - Check whether `arr[i] > arr[i + 1]`.
   - If true, swap them.
3. If `i` is odd:
   - Check whether `arr[i] < arr[i + 1]`.
   - If true, swap them.
4. Continue until the entire array is processed.

## Key Idea

At each position, only compare the current element with the next element and swap if the required `<` or `>` relationship is violated.

This greedy approach fixes each position in one pass.

## Complexity

### Time Complexity

O(n)

### Space Complexity

O(1)

## Concepts Used

- Arrays
- Greedy Approach
- Adjacent Elements
- Swapping
- Linear Traversal
- Conditional Statements