# Floor and Ceil in Unsorted Array

## Problem
Given an unsorted array `arr[]` and an integer `x`, find the floor and ceiling of `x`.

- **Floor:** The largest element less than or equal to `x`.
- **Ceil:** The smallest element greater than or equal to `x`.
- Return `-1` if either does not exist.

## Approach
Traverse the array once and maintain two variables: `floorVal` and `ceilVal`.

1. If an element is less than or equal to `x`, update the floor if it is larger than the current floor.
2. If an element is greater than or equal to `x`, update the ceiling if it is smaller than the current ceiling.
3. Return both values in the order `{floor, ceil}`.

## Example

**Input:**
```text
arr = [5, 6, 8, 9, 6, 5, 5, 6]
x = 7
```

**Output:**
```text
[6, 8]
```

**Explanation:**
- Floor of `7` is `6`, the largest element less than or equal to `7`.
- Ceil of `7` is `8`, the smallest element greater than or equal to `7`.

## Algorithm
1. Initialize `floorVal = -1` and `ceilVal = -1`.
2. Visit every element in the array.
3. Update `floorVal` when a better floor is found.
4. Update `ceilVal` when a better ceiling is found.
5. Return `{floorVal, ceilVal}`.

## Key Idea
Since the array is unsorted, check every element and keep track of the best floor and ceiling found so far.

## Complexity
- **Time Complexity:** `O(n)` — traverse the array once.
- **Auxiliary Space:** `O(1)` — use only two variables, excluding the returned array.

## Concepts Used
- Arrays
- Linear traversal
- Conditional statements
- Minimum and maximum tracking
