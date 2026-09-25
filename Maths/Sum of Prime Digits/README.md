# Sum of Prime Digits

## Problem

Given an integer `n`, find the sum of all **prime digits** present in `n`.

The prime digits are:

`2, 3, 5, 7`

For every digit of the number:

- Check whether the digit is prime.
- If it is prime, add it to the sum.
- Ignore non-prime digits.

## Approach

Use two functions:

### 1. `isPrime()`

Check whether a given digit is prime.

- Numbers less than `2` are not prime.
- Check whether the digit is divisible by any number from `2` to `n - 1`.
- If divisible, it is not prime.
- Otherwise, it is prime.

### 2. `primeSum()`

Extract every digit from `n` using:

`digit = temp % 10`

Then:

- Check the digit using `isPrime()`.
- If it is prime, add it to `sum`.
- Remove the last digit using `temp /= 10`.

## Example

Input:

`n = 23541`

Prime digits:

`2, 3, 5`

Sum:

`2 + 3 + 5 = 10`

Output:

`10`

## Algorithm

1. Initialize `sum = 0`.
2. Store `n` in a temporary variable.
3. Extract the last digit using `% 10`.
4. Check whether the digit is prime.
5. If prime, add it to `sum`.
6. Remove the last digit using `/ 10`.
7. Repeat until all digits are processed.
8. Return `sum`.

## Key Idea

A decimal digit can only be from `0` to `9`.

Among these, the only prime digits are:

`2, 3, 5, 7`

Therefore, each digit can be checked independently.

## Complexity

### Time Complexity

O(d × 9)

where `d` is the number of digits in `n`.

Since each digit is at most `9`, the prime check takes only a constant amount of work.

Overall:

O(d)

### Space Complexity

O(1)

Only a few integer variables are used.

## Concepts Used

- Number Manipulation
- Digit Extraction
- Prime Number
- Modulo Operator `%`
- Integer Division `/`
- Loops
- Functions
- Conditional Statements