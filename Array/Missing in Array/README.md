# Missing in Array

## Problem

Given an array containing `n - 1` distinct numbers from `1` to `n`, find the missing number.

---

## Approach

- Calculate the expected sum of numbers from `1` to `n`.
- Calculate the actual sum of the array.
- The difference between the two sums is the missing number.

---

## Algorithm

1. Compute `n = arr.size() + 1`.
2. Find the expected sum:
   ```
   n * (n + 1) / 2
   ```
3. Find the sum of all array elements.
4. Return:
   ```
   expectedSum - actualSum
   ```

---

## Example

### Input

```
5
1 2 3 5
```

### Output

```
4
```

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Math
- Arrays

---

## Tags

`Array` `Math`
