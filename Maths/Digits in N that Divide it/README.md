# Digits in N that Divide it

**Difficulty:** Medium

**Topics:** Strings, Mathematics, Modulo

## Problem Statement

Given a non-negative integer represented as a string, count how many digits divide the original number.

A digit is valid if:
- It is non-zero.
- The original number is divisible by that digit.

If a digit occurs multiple times, every occurrence is counted separately.

## Approach: String Modulo

1. Traverse each character of the string.
2. Convert the character into an integer.
3. Skip the digit if it is zero.
4. Calculate the remainder of the complete number when divided by the current digit.
5. If the remainder is zero, increment the answer.

Instead of converting the entire string into an integer, calculate the remainder digit by digit. This avoids integer overflow.

## Complexity Analysis

- **Time Complexity:** O(n), since each digit is checked against the number. The divisor is always between 1 and 9.
- **Space Complexity:** O(1), as no additional data structure is required.

## Key Concepts Learned

- String traversal
- Character-to-integer conversion
- Modulo operator
- Handling division by zero
- Avoiding integer overflow

## GFG Problem

[Digits in N that Divide it](https://www.geeksforgeeks.org/problems/count-digits5716/1)