# Kadane's Algorithm

## Problem

Given an integer array `arr`, find the **maximum sum of any contiguous subarray**.

A subarray consists of consecutive elements of the array.

---

## Approach

- Maintain two variables:
  - `currSum` → Maximum sum ending at the current index.
  - `maxSum` → Maximum sum found so far.
- For every element:
  - Either start a new subarray from the current element.
  - Or extend the previous subarray.
- Update the maximum answer after each step.

---

## Algorithm

1. Initialize:
   - `currSum = arr[0]`
   - `maxSum = arr[0]`
2. Traverse the array from index `1`.
3. Update:
   - `currSum = max(arr[i], currSum + arr[i])`
   - `maxSum = max(maxSum, currSum)`
4. Return `maxSum`.

---

## Example

### Input

```
8
-2 -3 4 -1 -2 1 5 -3
```

### Output

```
7
```

### Explanation

The maximum sum subarray is:

```
4 -1 -2 1 5
```

Sum = **7**.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Dynamic Programming
- Kadane's Algorithm
- Arrays

---

## Tags

`Array` `Dynamic Programming`