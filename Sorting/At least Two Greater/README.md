# At Least Two Greater

## Problem
Given an array of distinct elements, return all elements that have at least two elements greater than them.

## Approach
Sort the array in ascending order. The two greatest elements will be at the end, so remove them and return the remaining elements.

## Example
**Input:** `arr = [2, 8, 7, 1, 5]`

**Sorted:** `[1, 2, 5, 7, 8]`

**Output:** `[1, 2, 5]`

## Algorithm
1. Sort the array in ascending order.
2. Remove the last element (greatest).
3. Remove the last element again (second greatest).
4. Return the remaining array.

## Key Idea
Every element except the two greatest elements has at least two greater elements.

## Complexity
- **Time:** O(n log n), due to sorting.
- **Auxiliary Space:** O(log n) typically for sorting, implementation-dependent.

## Concepts Used
- Arrays
- Sorting
- STL `sort()`
- `vector::pop_back()`