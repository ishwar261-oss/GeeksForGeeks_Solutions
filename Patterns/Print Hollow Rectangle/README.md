# Print Hollow Rectangle

## Problem

Given the number of rows and columns, print a hollow rectangle pattern using stars.

For `rows = 4` and `columns = 5`:

    *****
    *   *
    *   *
    *****

The boundary contains stars, while the inside remains empty.

## Approach

Use nested loops to control rows and columns.

Print `*` when:

- It is the first row.
- It is the last row.
- It is the first column.
- It is the last column.

Otherwise, print a space.

## Example

Input:

rows = 4  
columns = 5

Output:

*****
*   *
*   *
*****

## Algorithm

1. Read the number of rows and columns.
2. Run a loop for every row.
3. Run another loop for every column.
4. Check whether the current position is on the boundary.
5. Print `*` for boundary positions.
6. Print a space for inner positions.
7. Move to the next row.

## Key Idea

A position belongs to the boundary if:

`i == 0 || i == rows - 1 || j == 0 || j == columns - 1`

## Complexity

### Time Complexity

O(rows × columns)

### Space Complexity

O(1)

## Concepts Used

- Nested Loops
- Pattern Printing
- Rows and Columns
- Conditional Statements
- Boundary Conditions