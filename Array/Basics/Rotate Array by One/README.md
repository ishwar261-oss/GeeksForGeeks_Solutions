# Rotate Array by One

## Problem

Rotate an array to the right by one position.

## Example

```text
Input:
[1, 2, 3, 4, 5]

Output:
[5, 1, 2, 3, 4]
```

## Approach

1. Store the last element.
2. Shift every element one position to the right.
3. Put the saved element at index `0`.

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Key Concept

Array shifting and in-place modification.