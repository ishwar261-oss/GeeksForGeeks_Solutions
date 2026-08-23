# Sum Except First and Last

## Problem

Given an array, find the sum of all elements **except the first and last elements**.

## Example

```text
Input:
[1, 2, 3, 4, 5]

Output:
9
```

### Explanation

Ignore the first element:

```text
1
```

Ignore the last element:

```text
5
```

Add the remaining elements:

```text
2 + 3 + 4 = 9
```

Therefore:

```text
Answer = 9
```

## Approach

We don't need to process the first and last elements.

Start the loop from index `1` and stop before the last index.

```text
[1, 2, 3, 4, 5]
 ↑           ↑
skip        skip
```

Process:

```text
2 + 3 + 4
```

## Algorithm

1. Initialize `sum = 0`.
2. Start from index `1`.
3. Traverse until `arr.size() - 2`.
4. Add each element to `sum`.
5. Return `sum`.

## Example

```text
Input:
[10, 20, 30, 40, 50, 60]
```

Skip:

```text
10
60
```

Calculate:

```text
20 + 30 + 40 + 50 = 140
```

Output:

```text
140
```

## Key Idea

```text
First element
     ↓
   Ignore

Middle elements
     ↓
     Sum

Last element
     ↓
   Ignore
```

## Complexity

### Time Complexity

```text
O(n)
```

We traverse the middle elements once.

### Space Complexity

```text
O(1)
```

Only one variable is used for the sum.

## Concepts Used

- Array
- Traversal
- Loop
- Indexing
- Sum
- Array Manipulation