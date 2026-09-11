# Print Solid Square

## Problem

Given an integer `n`, print a solid square pattern of stars with `n` rows and `n` columns.

For `n = 4`:

    ****
    ****
    ****
    ****

## Approach

Use two nested loops:

- The outer loop controls the rows.
- The inner loop prints `n` stars in each row.

Since every position contains a star, no condition is required.

## Example

Input:

n = 4

Output:

****
****
****
****

## Algorithm

1. Read `n`.
2. Run the outer loop `n` times.
3. For each row, run the inner loop `n` times.
4. Print `*` for every column.
5. Move to the next line after completing each row.

## Key Idea

A solid square has the same number of rows and columns, and every position contains a star.

Therefore, print `n × n` stars.

## Complexity

### Time Complexity

O(n²)

### Space Complexity

O(1)

## Concepts Used

- Nested Loops
- Pattern Printing
- Rows and Columns
- Iteration
- Basic Output