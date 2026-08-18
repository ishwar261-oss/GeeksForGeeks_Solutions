# Power of 2

## Problem

Given an integer `n`, check whether it is a **power of 2**.

A number is a power of 2 if it can be written as:

```text
2^k
```

where `k` is a non-negative integer.

## Examples

```text
Input:
16

Output:
true
```

Because:

```text
16 = 2^4
```

Another example:

```text
Input:
10

Output:
false
```

Because `10` cannot be written as `2^k`.

## Approach

A power of 2 has a special property in binary.

For example:

```text
1  = 0001
2  = 0010
4  = 0100
8  = 1000
16 = 10000
```

A power of 2 has **exactly one `1` bit**.

For such a number:

```text
n & (n - 1)
```

will always be:

```text
0
```

### Example

For `8`:

```text
8     = 1000
7     = 0111

8 & 7 = 0000
```

Therefore, `8` is a power of 2.

For `10`:

```text
10    = 1010
9     = 1001

10 & 9 = 1000
```

The result is not `0`, so `10` is not a power of 2.

## Algorithm

1. If `n <= 0`, return `false`.
2. Calculate:
   ```text
   n & (n - 1)
   ```
3. If the result is `0`, return `true`.
4. Otherwise, return `false`.

## Key Idea

```text
Power of 2
    ↓
Only one set bit
    ↓
n & (n - 1)
    ↓
0
```

## Complexity

### Time Complexity

```text
O(1)
```

### Space Complexity

```text
O(1)
```

## Concepts Used

- Bit Manipulation
- Binary Representation
- Bitwise AND
- Powers of 2