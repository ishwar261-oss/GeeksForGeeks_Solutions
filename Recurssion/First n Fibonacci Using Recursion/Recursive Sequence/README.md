# Recursive Sequence

## Problem
Calculate the sum:

F(n) = 1 + (2×3) + (4×5×6) + (7×8×9×10) + ...

Each term contains one more consecutive integer than the previous term.

Return the answer modulo 10^9 + 7.

## Approach
1. Initialize `MOD = 1000000007`, `ans = 0`, and `num = 1`.
2. For each term from `1` to `n`:
   - Initialize `product = 1`.
   - Multiply the next `i` consecutive integers to calculate the term.
   - Update `ans = (ans + product) % MOD`.
3. Return `ans`.

## Example

Input: `n = 5`

Output: `365527`

Explanation:
- Term 1: `1` = 1
- Term 2: `2 × 3` = 6
- Term 3: `4 × 5 × 6` = 120
- Term 4: `7 × 8 × 9 × 10` = 5040
- Term 5: `11 × 12 × 13 × 14 × 15` = 360360

Sum = `365527`

## Algorithm
1. Set `num = 1` and `ans = 0`.
2. Repeat for `i = 1` to `n`:
   - Set `product = 1`.
   - Repeat `i` times:
     - Multiply `product` by `num`, taking modulo `MOD`.
     - Increment `num`.
   - Add `product` to `ans`, taking modulo `MOD`.
3. Return `ans`.

## Key Idea
Each term uses consecutive integers, and the number of integers in the term increases by one each time. Keep a running number so the next term starts immediately after the previous term.

## Complexity
- Time: O(n²)
- Space: O(1)

## Concepts Used
- Loops
- Products
- Modulo arithmetic
- Sequences