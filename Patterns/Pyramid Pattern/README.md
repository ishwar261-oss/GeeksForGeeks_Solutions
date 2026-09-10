# Pyramid Pattern

## Problem

Given an integer `n`, print a pyramid pattern using stars.

For `n = 4`, the pattern is:

    *
   ***
  *****
 *******

## Approach

For every row:

- Print spaces before the stars to center the pyramid.
- Print an odd number of stars.
- The number of stars increases by `2` in every row.

For row `i`:

- Spaces = `n - i`
- Stars = `2 * i - 1`

## Example

Input:

n = 4

Output:

    *
   ***
  *****
 *******

## Algorithm

1. Read `n`.
2. Run a loop from `1` to `n`.
3. For each row:
   - Print `n - i` spaces.
   - Print `2 * i - 1` stars.
4. Move to the next line.

## Key Idea

The pyramid is controlled by two values:

- Spaces decrease by `1` every row.
- Stars increase by `2` every row.

The number of stars follows:

`1, 3, 5, 7, ...`

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