# Count Odd and Even

## Problem

Given an array of integers, count how many elements are:

- Even
- Odd

Return the counts.

## Example

```text
Input:
[1, 2, 3, 4, 5, 6]

Output:
Even = 3
Odd = 3
```

## Explanation

Even numbers:

```text
2, 4, 6
```

Count:

```text
3
```

Odd numbers:

```text
1, 3, 5
```

Count:

```text
3
```

## Approach

Traverse the array and check each number using the modulo operator `%`.

If:

```text
x % 2 == 0
```

the number is even.

Otherwise, it is odd.

## Algorithm

1. Initialize `even = 0`.
2. Initialize `odd = 0`.
3. Traverse every element.
4. If the element is divisible by `2`, increment `even`.
5. Otherwise, increment `odd`.
6. Return both counts.

## Key Idea

```text
Number
   ↓
x % 2 == 0 ?
 ┌─────┴─────┐
Yes          No
 ↓            ↓
Even         Odd
 ↓            ↓
even++       odd++
```

## Complexity

### Time Complexity

```text
O(n)
```

Every element is checked once.

### Space Complexity

```text
O(1)
```

Only two counters are used.

## Concepts Used

- Arrays
- Traversal
- Modulo Operator
- Odd and Even Numbers
- Counting