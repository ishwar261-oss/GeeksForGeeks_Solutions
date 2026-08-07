# Sort 0s, 1s and 2s

## Problem

Given an array `arr[]` containing only `0`s, `1`s, and `2`s, sort the array in ascending order **without using any built-in sorting function**.

---

## Approach

This solution uses the **Dutch National Flag Algorithm**.

Maintain three pointers:

- `low` → Position where the next `0` should be placed.
- `mid` → Current element being processed.
- `high` → Position where the next `2` should be placed.

### Rules

- If `arr[mid] == 0`
  - Swap `arr[low]` and `arr[mid]`.
  - Increment both `low` and `mid`.

- If `arr[mid] == 1`
  - It is already in the correct position.
  - Increment `mid`.

- If `arr[mid] == 2`
  - Swap `arr[mid]` and `arr[high]`.
  - Decrement `high`.
  - Do **not** increment `mid` because the swapped element needs to be checked.

---

## Algorithm

1. Initialize:
   - `low = 0`
   - `mid = 0`
   - `high = n - 1`
2. Traverse the array while `mid <= high`.
3. If the current element is:
   - `0` → Swap with `low`, increment both pointers.
   - `1` → Move `mid` forward.
   - `2` → Swap with `high`, decrement `high`.
4. Continue until the entire array is sorted.

---

## Example

### Input

```text
arr = [0, 2, 1, 2, 0]
```

### Output

```text
[0, 0, 1, 2, 2]
```

### Explanation

The array is sorted in ascending order using a single traversal.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Arrays
- Two Pointers
- Dutch National Flag Algorithm
- In-place Sorting

---

## Tags

`Array` `Two Pointers` `Sorting`