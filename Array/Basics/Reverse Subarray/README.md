# Reverse Subarray

## Problem

Given an array and two positions `l` and `r`, reverse the elements of the array between these two positions.

Only the selected subarray should be reversed.

## Example

```text
Input:
arr = [1, 2, 3, 4, 5]
l = 2
r = 4

Output:
[1, 4, 3, 2, 5]
```

The subarray from position `2` to `4` is:

```text
[2, 3, 4]
```

After reversing:

```text
[4, 3, 2]
```

So the final array becomes:

```text
[1, 4, 3, 2, 5]
```

## Approach

Use the **two-pointer technique**.

Place one pointer at the beginning of the selected subarray and another at the end.

```text
left → beginning
right → end
```

Swap the elements at these positions.

Then move both pointers toward the center.

Continue until:

```text
left >= right
```

## Algorithm

1. Convert the given positions to zero-based indexes.
2. Set `left = l`.
3. Set `right = r`.
4. Swap `arr[left]` and `arr[right]`.
5. Move `left` one position forward.
6. Move `right` one position backward.
7. Repeat until the pointers meet.
8. The selected subarray is now reversed.

## Example

```text
[1, 2, 3, 4, 5]
    ↑       ↑
   left   right
```

Swap:

```text
[1, 4, 3, 2, 5]
```

Move pointers:

```text
[1, 4, 3, 2, 5]
       ↑
     center
```

The subarray is reversed.

## Key Idea

Only reverse the required portion:

```text
Before:

[1 | 2 3 4 | 5]
      ←───→

After:

[1 | 4 3 2 | 5]
```

The elements outside the selected range remain unchanged.

## Complexity

### Time Complexity

```text
O(r - l)
```

Only the selected part of the array is processed.

In the worst case:

```text
O(n)
```

### Space Complexity

```text
O(1)
```

The reversal is performed in-place.

## Concepts Used

- Array
- Subarray
- Two Pointers
- Swapping
- In-place Algorithm
- Array Manipulation