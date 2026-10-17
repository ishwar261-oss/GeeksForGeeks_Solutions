# Juggler Sequence

**Difficulty:** Easy

**Topics:** Recursion, Loops, Mathematics

## Problem

Given a positive integer `n`, generate its Juggler Sequence until the sequence reaches `1`, including both the first number and the final `1`.

The next term is calculated using the following rules:

- If `n` is even: next term = `floor(sqrt(n))`
- If `n` is odd: next term = `floor(n^(3/2))`

## Example

**Input:** `n = 9`

**Output:** `[9, 27, 140, 11, 36, 6, 2, 1]`

**Explanation:**

- `9` is odd → `floor(9^1.5) = 27`
- `27` is odd → `floor(27^1.5) = 140`
- `140` is even → `floor(sqrt(140)) = 11`
- `11` is odd → `floor(11^1.5) = 36`
- `36` is even → `floor(sqrt(36)) = 6`
- `6` is even → `floor(sqrt(6)) = 2`
- `2` is even → `floor(sqrt(2)) = 1`

The sequence ends when it reaches `1`.

## Approach

Use a loop to generate the sequence.

1. Create a vector to store the sequence.
2. Add the current number to the vector.
3. If the number is `1`, stop.
4. If the number is even, calculate its square root.
5. Otherwise, calculate its power of `3/2`.
6. Repeat until the number becomes `1`.

## Algorithm

```text
Create an empty vector ans

Repeat:
    Add n to ans

    If n == 1:
        Stop

    If n is even:
        n = floor(sqrt(n))
    Else:
        n = floor(n^(3/2))

Return ans
```

## Complexity

- **Time:** `O(k)`, where `k` is the number of terms generated.
- **Space:** `O(k)` to store the sequence.

## Key Idea

Each new term depends on the previous term. Store every term and stop once the current term becomes `1`.

## Important Concepts

- `vector<long long>` to store the sequence
- `n % 2` to check whether a number is even or odd
- `sqrt(n)` to calculate the square root
- `pow(n, 1.5)` to calculate \(n^{3/2}\)
- Loop termination using `n == 1`