# Segregate Even and Odd Numbers

## Problem

Given an array of integers, rearrange the array so that:

1. All **even numbers** come first.
2. All **odd numbers** come after the even numbers.
3. The even numbers should be in **sorted order**.
4. The odd numbers should also be in **sorted order**.

## Example

```text
Input:
[1, 4, 3, 2, 5, 6, 8, 7]

Output:
[2, 4, 6, 8, 1, 3, 5, 7]
```

### Explanation

Separate the numbers into two groups:

```text
Even:
4 2 6 8

Odd:
1 3 5 7
```

Sort both groups:

```text
Even:
2 4 6 8

Odd:
1 3 5 7
```

Combine them:

```text
[2, 4, 6, 8, 1, 3, 5, 7]
```

## Approach

Use two separate arrays:

```text
even
odd
```

Traverse the original array.

If a number is even, add it to `even`.

Otherwise, add it to `odd`.

Then sort both arrays separately.

Finally, put the sorted even numbers into the original array followed by the sorted odd numbers.

## Algorithm

1. Create an `even` array.
2. Create an `odd` array.
3. Traverse the input array.
4. If `x % 2 == 0`, add `x` to `even`.
5. Otherwise, add `x` to `odd`.
6. Sort the `even` array.
7. Sort the `odd` array.
8. Copy all even numbers back into the original array.
9. Copy all odd numbers after them.
10. Return the modified array.

## Example

```text
Input:
[1, 4, 3, 2, 5, 6, 8, 7]
```

After segregation:

```text
Even:
[4, 2, 6, 8]

Odd:
[1, 3, 5, 7]
```

After sorting:

```text
Even:
[2, 4, 6, 8]

Odd:
[1, 3, 5, 7]
```

Final array:

```text
[2, 4, 6, 8, 1, 3, 5, 7]
```

## Key Idea

```text
Original Array
      ↓
 ┌────┴────┐
 ↓         ↓
Even      Odd
 ↓         ↓
Sort      Sort
 ↓         ↓
 └────┬────┘
      ↓
Even Numbers + Odd Numbers
```

## Complexity

### Time Complexity

```text
O(n log n)
```

The sorting of the even and odd groups dominates the complexity.

### Space Complexity

```text
O(n)
```

Two additional arrays are used to store the even and odd numbers.

## Concepts Used

- Array
- Even and Odd Numbers
- Sorting
- Array Traversal
- Separate Arrays
- Insertion
```