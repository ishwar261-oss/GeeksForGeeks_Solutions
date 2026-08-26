# Array Insert at Index

## Problem

Given an array, an index, and a value, insert the value at the given index.

All elements from that index onward are shifted one position to the right.

## Example

```text
Input:
arr = [1, 2, 4, 5]
index = 2
value = 3

Output:
[1, 2, 3, 4, 5]
```

## Approach

First increase the size of the array by one.

Then shift elements from **right to left** starting from the last element.

Finally, place the new value at the given index.

## Algorithm

1. Add one extra space to the array.
2. Start from the last index.
3. Shift each element one position to the right.
4. Stop after reaching the given index.
5. Place the value at `index`.

## Key Idea

```text
Before:
[1, 2, 4, 5]
       ↑
     index 2

Shift:
[1, 2, 4, 4, 5]

Insert:
[1, 2, 3, 4, 5]
```

## Complexity

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(1)
```

## Concepts Used

- Arrays
- Indexing
- Insertion
- Element Shifting
- Array Manipulation