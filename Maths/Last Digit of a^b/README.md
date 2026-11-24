# Last Digit of a^b

**Difficulty:** Medium  
**Accuracy:** 23.8%  
**Points:** 4

## Problem Statement

Given two integers `a` and `b` in the form of strings, find and return the last digit of `a` raised to the power `b`.

## Approach

- The last digit of a number depends only on its last digit.
- The last digits of powers repeat in a cycle of at most 4.
- Find the last digit of `a` using `a.back()`.
- Calculate `b % 4` to determine the position in the repeating cycle.
- If the remainder is 0, use 4 instead.
- Multiply the last digit repeatedly and take modulo 10.
- If `b` is 0, return 1.

## Complexity Analysis

- **Time Complexity:** O(n), where n is the length of string `b`.
- **Space Complexity:** O(1), as no extra space is used.

## Key Concept

**Modular Arithmetic:** We use modulo 10 to obtain the last digit and modulo 4 to handle the repeating cycle of powers.