# Replace all 0's with 5

## Problem

Given a positive integer `n`, replace every digit `0` in the number with `5`.

Return the resulting number.

## Example

```text
Input:
1020

Output:
1525
```

Explanation:

```text
1 0 2 0
  ↓   ↓
1 5 2 5
```

So:

```text
1020 → 1525
```

## Approach

Process the number **digit by digit** from right to left.

For each digit:

```text
digit = n % 10
```

If the digit is `0`, replace it with `5`.

Then place the modified digit in its correct position in the result.

After processing the digit:

```text
n = n / 10
```

This removes the last digit.

## Algorithm

1. Initialize `result = 0`.
2. Initialize `place = 1`.
3. Extract the last digit using:
   ```text
   n % 10
   ```
4. If the digit is `0`, change it to `5`.
5. Add the digit to the result using its place value.
6. Move to the next digit using:
   ```text
   n / 10
   ```
7. Repeat until all digits are processed.
8. Return the result.

## Example

For:

```text
n = 1020
```

Process the digits from right to left:

```text
Last digit = 0 → 5
```

```text
Next digit = 2
```

```text
Next digit = 0 → 5
```

```text
Next digit = 1
```

Result:

```text
1525
```

## Key Idea

```text
Extract digit
     ↓
Is digit 0?
   ↙     ↘
 Yes      No
  ↓        ↓
Change    Keep
to 5      digit
   ↘      ↙
     Build result
```

## Complexity

### Time Complexity

```text
O(log n)
```

The number of digits in `n` is processed once.

### Space Complexity

```text
O(1)
```

Only a few variables are used.

## Concepts Used

- Number Manipulation
- Digits
- Modulo Operator
- Integer Division
- Place Value
- Loops
```