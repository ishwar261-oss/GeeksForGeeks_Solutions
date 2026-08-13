# GeeksforGeeks — Two Sum - Pair with Given Sum

## Problem

Given an array `arr` and an integer `target`, check whether there are **two different elements** whose sum is equal to `target`.

Return `true` if such a pair exists.

Otherwise, return `false`.

## Example

```text
Input:
arr = [2, 7, 11, 15]
target = 9
```

We can find:

```text
2 + 7 = 9
```

So the output is:

```text
true
```

### Example 2

```text
Input:
arr = [1, 3, 5, 7]
target = 20
```

No two elements have a sum of `20`.

Output:

```text
false
```

## Approach

Use **Sorting + Two Pointers**.

First, sort the array.

Then use two pointers:

```text
left  → first element
right → last element
```

Calculate:

```text
arr[left] + arr[right]
```

### If the sum is equal to target

A valid pair is found.

Return:

```text
true
```

### If the sum is smaller than target

We need a larger sum, so move:

```text
left++
```

### If the sum is greater than target

We need a smaller sum, so move:

```text
right--
```

Continue until the two pointers meet.

If no pair is found, return:

```text
false
```

## Example

```text
arr = [2, 4, 6, 8]
target = 10
```

The array is already sorted.

Start:

```text
left = 2
right = 8
```

```text
2 + 8 = 10
```

Target found.

Output:

```text
true
```

## Algorithm

1. Sort the array.
2. Set `left = 0`.
3. Set `right = n - 1`.
4. Calculate the sum of the two elements.
5. If the sum equals `target`, return `true`.
6. If the sum is smaller, move `left` forward.
7. If the sum is greater, move `right` backward.
8. Continue until `left >= right`.
9. If no pair is found, return `false`.

## Complexity

### Time Complexity

```text
O(n log n)
```

Sorting takes `O(n log n)` and the two-pointer traversal takes `O(n)`.

### Space Complexity

```text
O(1)
```

Apart from the sorting implementation's internal stack space, no extra data structure is used.

## Key Idea

```text
Sort
  ↓
Two Pointers
  ↓
Compare Sum with Target
  ↓
Smaller Sum → Move Left
Larger Sum  → Move Right
```

## Concepts Used

- Array
- Sorting
- Two Pointers
- Pair Sum
- Searching

## Tags

`Array` `Sorting` `Two Pointers` `Pair Sum`