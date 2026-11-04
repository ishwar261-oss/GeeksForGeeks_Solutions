# Three Way Partitioning

## Problem
Given an array `arr[]` and a range `[a, b]`, rearrange the array into three groups:

1. Elements smaller than `a`.
2. Elements between `a` and `b` (inclusive).
3. Elements greater than `b`.

The relative order of elements does not matter.

## Approach: Dutch National Flag Algorithm

Use three pointers:
- `low`: Position for elements smaller than `a`.
- `mid`: Current element being checked.
- `high`: Position for elements greater than `b`.

## Algorithm
1. Initialize `low = 0`, `mid = 0`, and `high = n - 1`.
2. Traverse while `mid <= high`.
3. If `arr[mid] < a`:
   - Swap `arr[low]` and `arr[mid]`.
   - Increment `low` and `mid`.
4. If `arr[mid]` is between `a` and `b`:
   - Increment `mid`.
5. If `arr[mid] > b`:
   - Swap `arr[mid]` and `arr[high]`.
   - Decrement `high`.
6. Stop when `mid > high`.

## Example

**Input:**
```text
arr = [1, 2, 3, 3, 4]
a = 1, b = 2