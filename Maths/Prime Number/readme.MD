# Prime Number

## Problem
Write a C++ program to check whether a given number is **Prime** or **Not Prime**.

## Description
A prime number is a positive integer greater than **1** that has exactly **two factors**: **1** and itself.

Examples:
- 2 → Prime
- 7 → Prime
- 10 → Not Prime

## Algorithm
1. Read the input number `N`.
2. If `N <= 1`, it is not prime.
3. Check divisibility from `2` to `N / 2`.
4. If any number divides `N`, it is not prime.
5. Otherwise, it is prime.

## Time Complexity
O(N)

## Space Complexity
O(1)

## Example

### Input
```
17
```

### Output
```
Prime Number
```

## Topics
- Loops
- Conditional Statements
- Number Theory
- Basic Programming