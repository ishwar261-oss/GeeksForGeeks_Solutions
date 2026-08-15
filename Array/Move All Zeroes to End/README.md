# Move All Zeros to End

## Problem

Given an array, move all `0`s to the **end** of the array.

The order of the **non-zero elements must remain the same**.

## Example

```text
Input:
[1, 0, 3, 0, 5, 2]

Output:
[1, 3, 5, 2, 0, 0]
```

## Approach

We use an `index` variable to store the position where the next non-zero element should be placed.

Traverse the array from left to right.

Whenever we find a non-zero element:

```text
Place it at index
Move index forward
```

After all non-zero elements are placed, fill the remaining positions with `0`.

## Example

```text
[1, 0, 3, 0, 5]

Take 1:
[1, _, _, _, _]

Take 3:
[1, 3, _, _, _]

Take 5:
[1, 3, 5, _, _]

Fill remaining positions with 0:

[1, 3, 5, 0, 0]
```

## Algorithm

1. Set `index = 0`.
2. Traverse every element of the array.
3. If the current element is not `0`, place it at `arr[index]`.
4. Increase `index`.
5. After the traversal, fill all remaining positions with `0`.
6. The array now has all zeros at the end.

## Key Idea

```text
Find non-zero
     ↓
Move it forward
     ↓
Keep original order
     ↓
Fill remaining places with zero
```

## Complexity

| Complexity | Value |
|------------|-------|
| Time       | `O(n)` |
| Space      | `O(1)` |

## Concepts Used

- Array
- Traversal
- Two Pointers
- In-place Modification
- Maintaining Order