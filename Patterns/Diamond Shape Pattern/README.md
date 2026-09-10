# Diamond Shape Pattern

## Problem

Given an integer `n`, print a diamond-shaped pattern using stars.

For `n = 4`, the pattern is:

    *
   ***
  *****
 *******
  *****
   ***
    *

## Approach

The diamond consists of two parts:

1. Upper pyramid
2. Lower inverted pyramid

For each row:
- Print spaces before the stars.
- Print the required number of stars.
- In the upper half, the number of stars increases.
- In the lower half, the number of stars decreases.

## Example

Input:

n = 4

Output:

    *
   ***
  *****
 *******
  *****
   ***
    *

## Algorithm

1. Read `n`.
2. Print the upper pyramid:
   - Run rows from `1` to `n`.
   - Print `n - i` spaces.
   - Print `2 * i - 1` stars.
3. Print the lower inverted pyramid:
   - Run rows from `n - 1` down to `1`.
   - Print `n - i` spaces.
   - Print `2 * i - 1` stars.
4. The complete output forms a diamond.

## Key Idea

A diamond is simply:

`Upper Pyramid + Inverted Lower Pyramid`

The number of stars in each row follows:

`1, 3, 5, 7, ...`

and then decreases:

`7, 5, 3, 1`

## Complexity

### Time Complexity

O(n²)

### Space Complexity

O(1)

## Concepts Used

- Nested Loops
- Pattern Printing
- Spaces
- Stars
- Row and Column Control