# GFG: Power Using Recursion

## Problem
Given two integers `x` and `n`, calculate `x` raised to the power `n`, i.e., `x^n`, using recursion.

## Approach
Use recursion to multiply `x` by itself `n` times.

## Algorithm
1. If `n == 0`, return `1` because any non-zero number raised to power `0` is `1`.
2. Otherwise, calculate `x * power(x, n - 1)`.
3. Continue until the base case is reached.
4. Return the final result.

## Example
**Input:** `x = 2, n = 4`

**Recursive calls:**
- `power(2, 4) = 2 * power(2, 3)`
- `power(2, 3) = 2 * power(2, 2)`
- `power(2, 2) = 2 * power(2, 1)`
- `power(2, 1) = 2 * power(2, 0)`
- `power(2, 0) = 1`

**Output:** `16`

## Key Idea
Each recursive call reduces the exponent by `1`. When the exponent becomes `0`, return `1` and multiply the results while recursion unwinds.

## Complexity
- **Time:** `O(n)`
- **Auxiliary Space:** `O(n)` due to the recursion stack.

## Concepts Used
- Recursion
- Base case
- Recursive calls
- Stack unwinding