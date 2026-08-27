# Who has the Majority

## Problem

Given an array containing only `0`s and `1`s, determine which value has the majority.

A value has the majority if it occurs more times than the other value.

Return:

```text
0 → if 0 has the majority
1 → if 1 has the majority
-1 → if both occur the same number of times
```

## Example

```text
Input:
[1, 1, 0, 1, 0]

Output:
1
```

There are three `1`s and two `0`s, so `1` has the majority.

## Example 2

```text
Input:
[0, 1, 0, 1]

Output:
-1
```

Both values occur twice, so there is no majority.

## Approach

Count the number of `0`s and `1`s while traversing the array.

Then compare their counts:

```text
zeros > ones → 0
ones > zeros → 1
otherwise    → -1
```

## Algorithm

1. Initialize `zero = 0`.
2. Initialize `one = 0`.
3. Traverse the array.
4. Count `0`s and `1`s.
5. Compare the two counts.
6. Return the value with the greater count.
7. If both counts are equal, return `-1`.

## Key Idea

```text
        Count 0s and 1s
               ↓
        ┌──────┴──────┐
     zeros > ones   ones > zeros
        ↓               ↓
        0               1
             \         /
              \       /
             equal
                ↓
               -1
```

## Complexity

### Time Complexity

```text
O(n)
```

The array is traversed once.

### Space Complexity

```text
O(1)
```

Only two counters are used.

## Concepts Used

- Arrays
- Counting
- Comparison
- Majority
- Array Traversal