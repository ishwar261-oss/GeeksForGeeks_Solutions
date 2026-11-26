# Jumping Numbers

**Difficulty:** Medium  
**Accuracy:** 20.85%  
**Points:** 4

## Problem Statement

Given a positive integer `n`, find the largest Jumping Number smaller than or equal to `n`.

A number is called a Jumping Number if the difference between every pair of adjacent digits is exactly 1.

All single-digit numbers are considered Jumping Numbers.

## Approach

**Breadth First Search (BFS)**

- Start by inserting all single-digit numbers from 1 to 9 into a queue.
- Remove a number from the queue and check whether it is smaller than or equal to `n`.
- Extract its last digit.
- Generate two possible next numbers by appending the digit one smaller and one greater than the last digit.
- Add valid numbers to the queue if they do not exceed `n`.
- Keep updating the maximum Jumping Number found.
- Return the maximum value.

## Complexity Analysis

- **Time Complexity:** O(k), where k is the number of generated Jumping Numbers up to n.
- **Space Complexity:** O(k), for the BFS queue.

## Key Concepts

- Breadth First Search (BFS)
- Queue
- Number Generation
- Digit Manipulation