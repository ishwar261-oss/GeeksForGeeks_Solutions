# First n Fibonacci Using Recursion

## Problem

Given an integer `n`, print the first `n` Fibonacci numbers using recursion.

For this problem, the Fibonacci sequence starts with:

`1, 1, 2, 3, 5, 8, 13, ...`

## Approach

Use a recursive function with three parameters:

- `n` → how many Fibonacci numbers are left to print
- `a` → current Fibonacci number
- `b` → next Fibonacci number

At every recursive call:

1. Print `a`.
2. Move `b` into `a`.
3. Calculate the next value as `a + b`.
4. Decrease `n`.

The recursion stops when `n` becomes `0`.

## Example

Input:

`n = 5`

Output:

`1 1 2 3 5`

## Algorithm

1. Start with `a = 1` and `b = 1`.
2. Call the recursive function.
3. If `n == 0`, stop.
4. Print `a`.
5. Call the function with:
   - `n - 1`
   - `b`
   - `a + b`
6. Continue until `n` becomes `0`.

## Key Idea

Instead of calculating `F(n-1)` and `F(n-2)` separately, carry the current two Fibonacci numbers through the recursive calls.

This avoids the repeated calculations of the normal recursive Fibonacci approach.

## Complexity

### Time Complexity

O(n)

Each Fibonacci number is processed once.

### Space Complexity

O(n)

The recursion stack can contain up to `n` calls.

## Concepts Used

- Recursion
- Fibonacci Series
- Base Case
- Recursive Case
- Function Parameters
- Recursion Stack