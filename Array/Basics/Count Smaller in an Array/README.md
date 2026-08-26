# Count Smaller in an Array

## Problem

Given an array, for each element, count how many elements in the array are smaller than it.

Return the count for every element.

## Example

```text
Input:
[5, 0, 10, 2, 3]

Output:
[3, 0, 4, 1, 2]
```

## Explanation

For `5`:

```text
Elements smaller than 5:
0, 2, 3

Count = 3
```

For `0`:

```text
No element is smaller than 0.

Count = 0
```

For `10`:

```text
5, 0, 2, 3

Count = 4
```

For `2`:

```text
0

Count = 1
```

For `3`:

```text
0, 2

Count = 2
```

Therefore:

```text
[3, 0, 4, 1, 2]
```

## Approach

For every element, compare it with every other element.

If:

```text
arr[j] < arr[i]
```

then increase the count for `arr[i]`.

## Algorithm

1. Create an answer array.
2. For every element `arr[i]`:
   - Set `count = 0`.
   - Compare it with every other element.
   - If `arr[j] < arr[i]`, increment `count`.
3. Store `count` in the answer array.
4. Return the answer.

## Key Idea

```text
For every element
       ↓
Compare with all elements
       ↓
Is arr[j] < arr[i] ?
       ↓
     Yes
       ↓
    count++
```

## Complexity

### Time Complexity

```text
O(n²)
```

Two nested loops are used.

### Space Complexity

```text
O(n)
```

An answer array is required.

## Concepts Used

- Arrays
- Nested Loops
- Comparison
- Counting
- Array Traversal