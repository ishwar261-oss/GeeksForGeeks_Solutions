# Alternate Numbers in an Array

## Problem

Given an array, print or store the elements at **alternate positions**.

First, take elements at even indexes:

```text
0, 2, 4, ...
```

Then take elements at odd indexes:

```text
1, 3, 5, ...
```

## Example

```text
Input:
[1, 2, 3, 4, 5, 6]

Output:
[1, 3, 5, 2, 4, 6]
```

### Explanation

Even indexes:

```text
Index:  0  2  4
Value:  1  3  5
```

Odd indexes:

```text
Index:  1  3  5
Value:  2  4  6
```

Combine them:

```text
[1, 3, 5, 2, 4, 6]
```

## Approach

Use two loops:

1. Traverse even indexes.
2. Traverse odd indexes.


## Example

```text
Input:
[10, 20, 30, 40, 50]

Even indexes:
10 30 50

Odd indexes:
20 40

Output:
[10, 30, 50, 20, 40]
```

## Complexity

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(n)
```

because we create the `ans` array.

## Key Concept

```text
Index:  0  1  2  3  4  5
        ↓     ↓     ↓
        1     3     5

Then:

Index:    1     3     5
           ↓     ↓     ↓
           2     4     6
```

Result:

```text
[even-index elements] + [odd-index elements]
```