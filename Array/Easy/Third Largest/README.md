# Third Largest

## Problem

Given an array `arr[]` of positive integers, find the third largest element in the array.

Return `-1` if the array contains fewer than three elements.

Duplicate elements are allowed.

## Approach

Keep track of the three largest elements using three variables:

- `first` → largest element
- `second` → second largest element
- `third` → third largest element

Traverse the array once.

For each element:
- If it is greater than `first`, shift `first` to `second` and `second` to `third`.
- Else if it is greater than `second`, shift `second` to `third`.
- Else if it is greater than `third`, update `third`.

At the end, `third` contains the third largest element.

## Example

Input:
arr[] = [2, 4, 1, 3, 5]

Output:
3

Explanation:

The three largest elements are `5`, `4`, and `3`.

Therefore, the third largest element is `3`.

## Algorithm

1. If the array has fewer than 3 elements, return `-1`.
2. Initialize `first`, `second`, and `third` to `INT_MIN`.
3. Traverse every element of the array.
4. Update the three largest values according to the current element.
5. Return `third`.

## Key Idea

Maintain the three largest elements while traversing the array only once.

Duplicates are counted as separate elements.

For example:

`[5, 5, 5] → 5`

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
- `INT_MIN`