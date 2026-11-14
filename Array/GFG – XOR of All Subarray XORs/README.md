# GFG – XOR of All Subarray XORs

## Problem
Given an integer array, find the XOR of the XOR values of all possible non-empty subarrays.

## Approach: Mathematical Observation

Instead of generating every possible subarray, we calculate how many subarrays contain each element.

For an element at index `i`:

`Occurrences = (i + 1) * (n - i)`

This represents the number of subarrays containing that element.

### Key XOR Properties

- `x ^ x = 0`
- `x ^ 0 = x`
- XOR of an even number of identical values is 0.
- XOR of an odd number of identical values is the original value.

### Algorithm

1. Calculate the array size `n`.
2. If `n` is even, return `0`, because every element appears an even number of times.
3. If `n` is odd, every element appears an odd number of times.
4. XOR all array elements and return the result.

## Example

**Input:** `[1, 2, 3]`

- Element 1 appears in 3 subarrays.
- Element 2 appears in 4 subarrays.
- Element 3 appears in 3 subarrays.

Therefore:

`1 ^ 3 = 2`

**Output:** `2`

## Complexity Analysis

- **Time Complexity:** O(n) – One traversal of the array.
- **Space Complexity:** O(1) – No extra data structure is used.

## Key Learning

This problem demonstrates how XOR properties and mathematical observations can optimize a problem that initially appears to require generating all subarrays.
