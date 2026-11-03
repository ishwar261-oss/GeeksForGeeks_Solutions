# Selection Sort

## Problem
Given an array arr[], sort the array in increasing order using
the Selection Sort algorithm.

## Approach
Selection Sort divides the array into two parts:
1. Sorted subarray.
2. Unsorted subarray.

In every pass, find the smallest element from the unsorted
subarray and place it at the beginning of the unsorted subarray.

Repeat this process until the entire array is sorted.

## Example

Input: arr = [4, 1, 3, 9, 7]

Output: [1, 3, 4, 7, 9]

### Dry Run

Initial: [4, 1, 3, 9, 7]

Pass 1: Find minimum (1), swap with 4.
[1, 4, 3, 9, 7]

Pass 2: Find minimum (3), swap with 4.
[1, 3, 4, 9, 7]

Pass 3: Find minimum (4), no change.
[1, 3, 4, 9, 7]

Pass 4: Find minimum (7), swap with 9.
[1, 3, 4, 7, 9]

Sorted Array: [1, 3, 4, 7, 9]

## Algorithm
1. Start from the first index.
2. Assume the current index contains the minimum element.
3. Traverse the remaining unsorted array.
4. Find the index of the smallest element.
5. Swap the smallest element with the current element.
6. Repeat until the array is sorted.

## Key Idea
Select the minimum element from the unsorted part
and place it at its correct position.

## Complexity

Time Complexity:
- Best Case: O(n²)
- Average Case: O(n²)
- Worst Case: O(n²)

Space Complexity: O(1)

## Concepts Used
- Arrays
- Nested Loops
- Minimum Element
- Swapping
- Sorting Algorithms