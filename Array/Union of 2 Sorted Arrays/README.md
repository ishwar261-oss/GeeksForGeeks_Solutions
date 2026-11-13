# Union of 2 Sorted Arrays

## Problem
Given two sorted arrays `a[]` and `b[]`, where each array may contain duplicate elements, return the elements in the union of the two arrays in sorted order.

The union should contain only **distinct elements** that are present in either of the arrays.

## Approach
1. Use two pointers, one for each sorted array.
2. Compare the elements at both pointers.
3. Add the smaller element to the result.
4. If both elements are equal, add it only once.
5. Skip duplicate elements to avoid repeated values.
6. Continue until both arrays are completely traversed.
7. Return the result.

## Example

Input:
a = [1, 2, 3, 4, 5]
b = [1, 2, 3, 6, 7]

Output:
[1, 2, 3, 4, 5, 6, 7]

Explanation:
Distinct elements present in either array are:
1 2 3 4 5 6 7.

## Algorithm
1. Initialize two pointers `i = 0` and `j = 0`.
2. Compare `a[i]` and `b[j]`.
3. If `a[i] < b[j]`, add `a[i]` and move `i`.
4. If `b[j] < a[i]`, add `b[j]` and move `j`.
5. If both are equal, add the element only once and move both pointers.
6. Skip duplicate elements.
7. Add the remaining distinct elements from either array.
8. Return the result.

## Key Idea
Since both arrays are already sorted, the **two-pointer technique** allows us to merge them in sorted order while removing duplicates.

## Complexity Analysis
- Time Complexity: O(n + m)
- Auxiliary Space Complexity: O(1) excluding the output array.

## Concepts Used
- Arrays
- Two Pointers
- Sorted Arrays
- Merging
- Duplicate Removal
- STL: `vector()`