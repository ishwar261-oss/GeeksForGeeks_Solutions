# LCM of Two Numbers

## Problem

Given two positive integers `a` and `b`, find their **Least Common Multiple (LCM)**.

### Example

Input:

a = 12  
b = 18

Output:

36

---

## Approach

First find the **GCD** of `a` and `b` using the Euclidean Algorithm.

Then use:

LCM(a, b) = (a / GCD(a, b)) × b

For:

a = 12  
b = 18

GCD = 6

LCM = (12 / 6) × 18  
    = 36

---

## Algorithm

1. Find the GCD of `a` and `b`.
2. Divide `a` by the GCD.
3. Multiply the result by `b`.
4. Return the result.

---

## Key Idea

Use:

LCM(a, b) = (a / GCD(a, b)) × b

Dividing before multiplying helps reduce the chance of integer overflow.

---

## Example Dry Run

a = 24  
b = 36

GCD:

36 % 24 = 12  
24 % 12 = 0

GCD = 12

LCM:

(24 / 12) × 36  
= 2 × 36  
= 72

Answer = 72

---

## Complexity

Time: `O(log(min(a, b)))`

Space: `O(1)`

---

## Concepts Used

- LCM
- GCD
- Euclidean Algorithm
- Modulo `%`
- Integer arithmetic