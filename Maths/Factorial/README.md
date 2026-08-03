# Factorial

## Problem

Given an integer `n`, find the factorial of `n`.

The factorial of a number is the product of all positive integers from `1` to `n`.

```
n! = 1 × 2 × 3 × ... × n
```

---

## Approach

- Initialize the answer as `1`.
- Multiply it by every number from `1` to `n`.
- Return the final product.

---

## Algorithm

1. Initialize `fact = 1`.
2. Traverse from `1` to `n`.
3. Multiply:
   ```
   fact = fact * i
   ```
4. Return `fact`.

---

## Example

### Input

```
5
```

### Output

```
120
```

### Explanation

```
5! = 1 × 2 × 3 × 4 × 5 = 120
```

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Math
- Iteration
- Loops

---

## Tags

`Math` `Iteration`