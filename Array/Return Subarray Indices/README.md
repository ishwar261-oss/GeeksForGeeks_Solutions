# Return Subarray Indices

## Problem

Given an array `arr[]` and an integer `target`, find a **continuous subarray** whose sum is equal to `target`.

Return the **starting and ending indices** of that subarray.

If no such subarray exists, return `-1`.

---

## What is a Subarray?

A subarray is a **continuous part of an array**.

For example:

```text
Array = [1, 2, 3, 4, 5]
```

Some subarrays are:

```text
[1, 2]
[2, 3, 4]
[3, 4]
[5]
```

But:

```text
[1, 3]
```

is not a subarray because the elements are not continuous.

---

## Approach

Use the **Sliding Window / Two Pointer** approach.

Maintain two pointers:

```text
start
end
```

and keep track of the current sum.

### Steps

1. Start with `start = 0`.
2. Add elements while moving `end`.
3. If the current sum becomes greater than `target`, remove elements from the beginning.
4. If the current sum becomes equal to `target`, return the indices.
5. Continue until the array is completely processed.

---

## Example

### Input

```text
arr = [1, 2, 3, 7, 5]
target = 12
```

The required subarray is:

```text
[2, 3, 7]
```

Its sum is:

```text
2 + 3 + 7 = 12
```

Therefore, the answer is:

```text
2 4
```

if using **1-based indexing**.

---

## Important

GeeksforGeeks problems often expect **1-based indexing**.

So:

```text
Array:
[1, 2, 3, 7, 5]
 1  2  3  4  5
```

The subarray:

```text
[2, 3, 7]
```

has indices:

```text
2 4
```

---

## Algorithm

1. Initialize:
   ```text
   start = 0
   sum = 0
   ```

2. Traverse the array using `end`.

3. Add:
   ```text
   sum += arr[end]
   ```

4. While:
   ```text
   sum > target
   ```
   remove:
   ```text
   arr[start]
   ```
   and increment `start`.

5. If:
   ```text
   sum == target
   ```
   return:
   ```text
   start + 1, end + 1
   ```

6. If no subarray is found, return `-1`.

---

## Complexity

### Time Complexity

```text
O(n)
```

Each element is added and removed at most once.

### Space Complexity

```text
O(1)
```

No extra array is required.

---

## Concepts Used

- Arrays
- Subarrays
- Sliding Window
- Two Pointers
- Prefix Sum Concept

---

## Tags

`Array` `Subarray` `Sliding Window` `Two Pointers`