# Maximum Product Subarray

## Problem

Given an integer array `arr`, find the maximum product of any contiguous subarray.

The subarray must contain at least one element.

---

## Approach

- Keep track of:
  - `maxProd` → Maximum product ending at the current index.
  - `minProd` → Minimum product ending at the current index.
- A negative number can turn the smallest product into the largest, so swap `maxProd` and `minProd` whenever the current element is negative.
- Update both products and maintain the overall maximum answer.

---

## Algorithm

1. Initialize:
   - `maxProd = arr[0]`
   - `minProd = arr[0]`
   - `ans = arr[0]`
2. Traverse the array from index `1`.
3. If the current element is negative, swap `maxProd` and `minProd`.
4. Update:
   - `maxProd = max(arr[i], maxProd * arr[i])`
   - `minProd = min(arr[i], minProd * arr[i])`
5. Update the answer using `maxProd`.
6. Return the maximum product.

---

## Example

### Input

```
5
2 3 -2 4 -1
```

### Output

```
48
```

### Explanation

The maximum product subarray is:

```
2 × 3 × -2 × 4 × -1 = 48
```

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Dynamic Programming
- Kadane's Algorithm Variation
- Arrays

---

## Tags

`Array` `Dynamic Programming` `Kadane's Algorithm`