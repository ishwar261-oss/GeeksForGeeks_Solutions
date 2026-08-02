# Fibonacci Series

## Problem
Write a C++ program to print the Fibonacci series up to **N** terms.

## Description
The Fibonacci sequence starts with **0** and **1**. Each subsequent number is the sum of the previous two numbers.

Example:
0 1 1 2 3 5 8 13 ...

## Algorithm
1. Read the number of terms `N`.
2. Initialize `a = 0` and `b = 1`.
3. Print `a`.
4. Calculate the next term:
   - `c = a + b`
   - `a = b`
   - `b = c`
5. Repeat until all terms are printed.

## Time Complexity
O(N)

## Space Complexity
O(1)

## Example

### Input
```
7
```

### Output
```
0 1 1 2 3 5 8
```

## Topics
- Loops
- Variables
- Number Series
- Basic Programming