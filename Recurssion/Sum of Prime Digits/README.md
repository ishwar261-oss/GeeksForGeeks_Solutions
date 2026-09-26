# Nth Fibonacci Using Recursion

## Problem

Given an integer `n`, find the `n`th Fibonacci number using recursion.

The Fibonacci sequence is:

`0, 1, 1, 2, 3, 5, 8, 13, ...`

Each number is calculated by adding the previous two numbers.

The Fibonacci formula is:

`F(n) = F(n - 1) + F(n - 2)`

with:

- `F(0) = 0`
- `F(1) = 1`

## Approach

Use a recursive function to calculate the `n`th Fibonacci number.

For every value of `n`:

- If `n == 0`, return `0`.
- If `n == 1`, return `1`.
- Otherwise, recursively calculate:
  - `F(n - 1)`
  - `F(n - 2)`
- Add both results.

## Example

Input:

`n = 6`

Fibonacci sequence:

`0, 1, 1, 2, 3, 5, 8`

Therefore:

`F(6) = 8`

Output:

`8`

## Algorithm

1. Create a recursive function `fibonacci(n)`.
2. If `n == 0`, return `0`.
3. If `n == 1`, return `1`.
4. Return:
   `fibonacci(n - 1) + fibonacci(n - 2)`
5. Call the function with `n`.
6. Print the result.

## Key Idea

The Fibonacci sequence has a recursive relationship:

`F(n) = F(n - 1) + F(n - 2)`

The recursion continues until it reaches the two base cases:

`F(0) = 0`

`F(1) = 1`

## Complexity

### Time Complexity

O(2^n)

The same Fibonacci values are calculated repeatedly.

### Space Complexity

O(n)

The maximum recursion depth is `n`.

## Concepts Used

- Recursion
- Fibonacci Sequence
- Base Case
- Recursive Case
- Function Calls
- Recursion Stack