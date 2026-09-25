# GCD and LCM of Two Numbers

## Problem

Given two positive integers `a` and `b`, find:

1. **GCD (Greatest Common Divisor)**
2. **LCM (Least Common Multiple)**

### Example

Input:

a = 12
b = 18

Output:

GCD = 6
LCM = 36

---

## Approach

### 1. GCD — Euclidean Algorithm

The Euclidean Algorithm repeatedly calculates the remainder.

For:

a = 12
b = 18

Since `18 > 12`:

18 % 12 = 6

Then:

12 % 6 = 0

When one number becomes `0`, the other number is the GCD.

Therefore:

GCD = 6

---

### 2. LCM

Use the relationship:

LCM(a, b) = (a / GCD(a, b)) × b

For:

a = 12
b = 18
GCD = 6

LCM = (12 / 6) × 18
    = 2 × 18
    = 36

---

## Algorithm

### GCD

1. While both `a` and `b` are greater than `0`:
2. If `a > b`, replace `a` with `a % b`.
3. Otherwise, replace `b` with `b % a`.
4. When one becomes `0`, return the other.

### LCM

1. Calculate GCD.
2. Divide `a` by GCD.
3. Multiply the result by `b`.

---

## Key Idea

The main idea is the **Euclidean Algorithm**:

`gcd(a, b) = gcd(b, a % b)`

The process continues until the remainder becomes `0`.

---

## Example Dry Run

a = 24
b = 36

36 % 24 = 12
24 % 12 = 0

GCD = 12

LCM = (24 / 12) × 36
    = 2 × 36
    = 72

---

## Complexity

### GCD

Time: `O(log(min(a, b)))`

Space: `O(1)`

### LCM

Time: `O(log(min(a, b)))`

Space: `O(1)`

---

## Concepts Used

- GCD
- LCM
- Euclidean Algorithm
- Modulo `%`
- Loops
- Mathematical optimization
- Integer arithmetic