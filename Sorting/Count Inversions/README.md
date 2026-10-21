# Count Inversions — GFG

## Problem
Given an array, count the pairs `(i, j)` such that:

- `i < j`
- `arr[i] > arr[j]`

## Approach: Merge Sort

1. Divide the array into two halves.
2. Recursively count inversions in the left half.
3. Recursively count inversions in the right half.
4. Merge both sorted halves while counting cross-inversions.

## Key Idea

During merging, if `arr[i] > arr[j]`, then every remaining element in the left half, from `i` to `mid`, is also greater than `arr[j]`.

Therefore, add:

`mid - i + 1`

to the inversion count.

Use `long long` internally because the number of inversions can be large.

## Example

Input: `[2, 4, 1, 3, 5]`

Inversions:
- `(2, 1)`
- `(4, 1)`
- `(4, 3)`

Output: `3`

## Algorithm

1. Set `mid = (left + right) / 2`.
2. Count inversions in both halves recursively.
3. Merge the halves.
4. Whenever a right-side element is smaller than the current left-side element, count all remaining elements in the left half.
5. Return the total count.

## Complexity

- **Time:** `O(n log n)`
- **Auxiliary Space:** `O(n)`

## Concepts Used
- Arrays
- Divide and Conquer
- Recursion
- Merge Sort
- Counting inversions