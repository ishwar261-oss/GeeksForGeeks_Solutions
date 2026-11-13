# Intersection of Two Sorted Arrays

## Problem
Given two sorted arrays `arr1[]` and `arr2[]`, return the intersection of both arrays.

The intersection contains the elements that are **common in both arrays**.

Duplicate elements should be included **only once**.

If there is no common element, return an empty array.

## Approach
1. Use two pointers, one for each sorted array.
2. Compare the elements at both pointers.
3. If both elements are equal, add the element to the result.
4. Move both pointers after finding a common element.
5. If `arr1[i]` is smaller, move `i`.
6. If `arr2[j]` is smaller, move `j`.
7. Skip duplicate elements to avoid adding the same element more than once.
8. Continue until either array is completely traversed.

## Example

Input:
arr1 = [1, 2, 3, 4]
arr2 = [2, 4, 6, 7, 8]

Output:
[2, 4]

Explanation:
2 and 4 are the only elements common in both arrays.

## Algorithm
1. Initialize two pointers `i = 0` and `j = 0`.
2. Compare `arr1[i]` and `arr2[j]`.
3. If they are equal, add the element to the result and move both pointers.
4. If `arr1[i] < arr2[j]`, move `i`.
5. Otherwise, move `j`.
6. Skip duplicate elements.
7. Continue until either pointer reaches the end of its array.
8. Return the result.

## Key Idea
Since both arrays are already sorted, the **two-pointer technique** can be used to efficiently find common elements without checking every possible pair.

## Complexity Analysis
- Time Complexity: O(n + m)
- Auxiliary Space Complexity: O(1) excluding the output array.

## Concepts Used
- Arrays
- Two Pointers
- Sorted Arrays
- Traversal
- Duplicate Removal