# Check Sorted Array

## Problem
Given an array `arr[]`, check whether it is sorted in non-decreasing order.
Return `true` if sorted; otherwise, return `false`.

## Approach
Traverse the array from the second element.
Compare each element with its previous element.
If the current element is smaller than the previous element, the array is not sorted, so return `false`.
If all elements satisfy the condition, return `true`.

## Example

Input:
arr[] = [10, 20, 30, 40, 50]

Output:
true

Explanation:
Every element is greater than or equal to the previous element.
Therefore, the array is sorted.

## Algorithm
1. Start from index 1.
2. Compare `arr[i]` with `arr[i - 1]`.
3. If `arr[i] < arr[i - 1]`, return `false`.
4. If the loop completes, return `true`.

## Key Idea
In a non-decreasing array, every element must be greater than
or equal to the element before it.

Equal adjacent elements are allowed.

## Complexity Analysis
- Time Complexity: O(n) — In the worst case, every element is checked.
- Auxiliary Space: O(1) — Only a constant amount of extra space is used.

## Concepts Used
- Arrays
- Traversal
- Conditional Statements
- Comparison Operators