# Longest Subarray with Sum K

## Problem

Given an array `arr` and an integer `k`, find the length of the **longest subarray** whose sum is exactly `k`.

A subarray must contain **continuous elements**.

## Example

```text
Input:
arr = [10, 5, 2, 7, 1, 9]
k = 15

Output:
4
```

Explanation:

The subarray:

```text
[5, 2, 7, 1]
```

has sum:

```text
5 + 2 + 7 + 1 = 15
```

Its length is:

```text
4
```

So the answer is:

```text
4
```

## Approach

Use two loops to check every possible subarray.

The outer loop chooses the starting position.

The inner loop extends the subarray one element at a time and keeps calculating its sum.

Whenever:

```text
sum == k
```

calculate the length of the current subarray and update the maximum length.

## Example

```text
arr = [1, 2, 3, 4]
k = 6
```

Starting from index `0`:

```text
[1]       → sum = 1
[1, 2]     → sum = 3
[1, 2, 3]  → sum = 6
```

We found:

```text
[1, 2, 3]
```

Length:

```text
3
```

Continue checking the other subarrays to make sure there is no longer valid subarray.

## Algorithm

1. Set `ans = 0`.
2. Choose every possible starting index `i`.
3. Set `sum = 0`.
4. Extend the subarray using index `j`.
5. Add `arr[j]` to `sum`.
6. If `sum == k`, calculate:
   ```text
   j - i + 1
   ```
7. Update `ans` if this length is larger.
8. Return `ans`.

## Key Idea

```text
Choose starting point
        ↓
Keep extending the subarray
        ↓
Calculate sum
        ↓
sum == K ?
        ↓
Update maximum length
```

## Complexity

### Time Complexity

```text
O(n²)
```

We check all possible subarrays.

### Space Complexity

```text
O(1)
```

Only a few variables are used.

## Concepts Used

- Array
- Subarray
- Nested Loops
- Prefix Sum Idea
- Array Traversal
- Maximum Length