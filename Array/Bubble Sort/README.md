# Bubble Sort

## Problem

Given an array, sort the array in **ascending order** using the Bubble Sort algorithm.

### Example

```text
Input:
[5, 3, 1, 4, 2]

Output:
[1, 2, 3, 4, 5]
```

## Approach

Bubble Sort compares **adjacent elements**.

If the left element is greater than the right element, swap them.

For example:

```text
[5, 3, 1, 4, 2]

5 > 3 → swap
[3, 5, 1, 4, 2]

5 > 1 → swap
[3, 1, 5, 4, 2]

5 > 4 → swap
[3, 1, 4, 5, 2]

5 > 2 → swap
[3, 1, 4, 2, 5]
```

After the first pass, the largest element `5` reaches the end.

The same process is repeated for the remaining elements.

## Algorithm

1. Start from the first element.
2. Compare adjacent elements.
3. If the left element is greater, swap them.
4. Continue until the end of the unsorted part.
5. Repeat for the remaining elements.
6. If no swap happens during a pass, stop early.

## Key Idea

```text
Compare adjacent elements
        ↓
Swap if needed
        ↓
Largest element moves to the end
        ↓
Repeat
```

## Complexity

| Case | Time |
|------|------|
| Best | `O(n)` |
| Average | `O(n²)` |
| Worst | `O(n²)` |

**Space Complexity:** `O(1)`

## Concepts Used

- Array
- Sorting
- Bubble Sort
- Nested Loops
- Swapping
- In-place Sorting

## Important Point

The inner loop becomes smaller after every pass:

```text
n - 1
n - 2
n - 3
...
```

because the largest elements are already placed at the end.

The `swapped` flag also allows the algorithm to stop early when the array is already sorted.