# Max Product Pair

## Problem

Given an array of integers, find the **maximum product** that can be obtained by multiplying any two different elements.

Return the maximum possible product.

## Example

```text
Input:
[1, 5, 3, 7, 2]

Output:
35
```

Explanation:

The largest possible product is:

```text
5 × 7 = 35
```

So the answer is:

```text
35
```

## Approach

The maximum product can come from two cases:

1. The two largest positive numbers.
2. The two smallest negative numbers.

For example:

```text
[-10, -5, 2, 3]
```

The two smallest numbers are:

```text
-10, -5
```

Their product is:

```text
(-10) × (-5) = 50
```

which is greater than:

```text
2 × 3 = 6
```

So we keep track of:

```text
largest1
largest2
smallest1
smallest2
```

Then compare:

```text
largest1 × largest2
```

with:

```text
smallest1 × smallest2
```

The larger value is the answer.

## Algorithm

1. Initialize the two largest and two smallest values.
2. Traverse the array.
3. Update the largest two values.
4. Update the smallest two values.
5. Calculate the product of the two largest values.
6. Calculate the product of the two smallest values.
7. Return the larger product.

## Example

```text
Input:
[-10, -3, 5, 6, 2]
```

Two largest:

```text
6, 5
```

Product:

```text
6 × 5 = 30
```

Two smallest:

```text
-10, -3
```

Product:

```text
(-10) × (-3) = 30
```

Therefore:

```text
Output:
30
```

## Key Idea

For maximum product:

```text
Two largest numbers
        OR
Two smallest negative numbers
```

```text
max(
    largest1 × largest2,
    smallest1 × smallest2
)
```

## Complexity

### Time Complexity

```text
O(n)
```

The array is traversed once.

### Space Complexity

```text
O(1)
```

Only four variables are required.

## Concepts Used

- Array
- Traversal
- Maximum and Minimum
- Negative Numbers
- Product
- Comparison
- One-Pass Algorithm