# First Occurrence in Sorted Array

## Problem

Given a sorted array and a number `x`, find the **first occurrence** of `x`.

If `x` is not present, return `-1`.

### Example

```text
Array:  [1, 2, 2, 2, 3, 4]
x = 2
```

The first `2` is at index `1`.

```text
Output:
1
```

## Approach

Since the array is sorted, use **Binary Search**.

When `x` is found:

- Store the current index.
- Continue searching on the **left side**.
- This helps find an earlier occurrence.

If the middle value is:

- Smaller than `x` → search right.
- Greater than `x` → search left.
- Equal to `x` → store the index and search left.

## Algorithm

1. Set `start = 0` and `end = n - 1`.
2. Set `ans = -1`.
3. Find the middle element.
4. Compare it with `x`.
5. If it is equal:
   - Store the index.
   - Move `end` to `mid - 1`.
6. Continue until the search ends.
7. Return `ans`.

## Example

```text
arr = [1, 2, 2, 2, 3, 4]
x = 2
```

Binary search finds a `2`.

Instead of stopping, search further left.

Eventually:

```text
First occurrence = index 1
```

## If Element Is Not Present

```text
arr = [1, 2, 3, 4]
x = 5
```

Output:

```text
-1
```

## Complexity

**Time:** `O(log n)`

**Space:** `O(1)`

## Key Idea

For finding the **first occurrence**:

```text
Found → store index → continue searching LEFT
```

This is an important variation of Binary Search.

## Concepts

- Array
- Sorted Array
- Binary Search
- First Occurrence