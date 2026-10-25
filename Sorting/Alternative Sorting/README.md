# Alternative Sorting

## Problem
Rearrange an array of distinct integers so that the elements appear in this order:
- Largest element
- Smallest element
- Second largest element
- Second smallest element
- Continue until all elements are used.

## Approach
1. Sort the array in ascending order.
2. Initialize two pointers:
   - `left = 0` points to the smallest element.
   - `right = arr.size() - 1` points to the largest element.
3. Add the largest element to the result and decrease `right`.
4. Add the smallest element to the result and increase `left`.
5. Repeat until all elements are used.
6. Return the result.

## Example

Input:
arr = [7, 1, 2, 3, 4, 5, 6]

Sorted array:
[1, 2, 3, 4, 5, 6, 7]

Output:
[7, 1, 6, 2, 5, 3, 4]

## Algorithm
1. Sort the array.
2. Create an empty result vector.
3. Set `left = 0` and `right = n - 1`.
4. While `left <= right`:
   - Add `arr[right]` and decrement `right`.
   - If elements remain, add `arr[left]` and increment `left`.
5. Return the result.

## Key Idea
Use two pointers on the sorted array to select the largest and smallest remaining elements alternately.

## Complexity Analysis
- Time Complexity: O(n log n), due to sorting.
- Auxiliary Space Complexity: O(n), for the result vector.

## Concepts Used
- Sorting
- Two Pointers
- Vectors