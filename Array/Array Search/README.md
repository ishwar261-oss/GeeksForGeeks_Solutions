# Array Search

## Problem

Given an array `arr[]` and an integer `x`, determine whether `x` is present in the array.

Return the index of `x` if found; otherwise, return `-1`.

---

## Approach

- Traverse the array from left to right.
- Compare each element with the target value `x`.
- If a match is found, return its index immediately.
- If the entire array is traversed without finding `x`, return `-1`.

---

## Algorithm

1. Traverse the array from index `0` to `n - 1`.
2. If `arr[i] == x`, return `i`.
3. If no element matches `x`, return `-1`.

---

## Example

### Input

```text
arr = [1, 2, 3, 4, 5]
x = 4
```

### Output

```text
3
```

### Explanation

The element `4` is present at index `3`.

---

## Example

### Input

```text
arr = [10, 20, 30]
x = 15
```

### Output

```text
-1
```

### Explanation

The element `15` is not present in the array.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Arrays
- Linear Search
- Iteration

---

## Tags

`Array` `Searching` `Linear Search`