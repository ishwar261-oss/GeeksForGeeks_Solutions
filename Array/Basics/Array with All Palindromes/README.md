# Array with All Palindromes

## Problem

Given an array of positive integers, check whether **every element of the array is a palindrome**.

Return:

```text
true
```

if all elements are palindromes.

Otherwise return:

```text
false
```

## Example

```text
Input:
[111, 222, 333, 444, 555]

Output:
true
```

Every number reads the same from both directions.

## Example 2

```text
Input:
[121, 131, 123]

Output:
false
```

`123` is not a palindrome.

## Approach

For every element:

1. Store the original number.
2. Reverse the number using `% 10` and `/ 10`.
3. Compare the reversed number with the original.
4. If any number is not a palindrome, return `false`.
5. If all numbers are palindromes, return `true`.

## Palindrome Example

```text
121
```

Reverse:

```text
121
```

Since:

```text
121 == 121
```

it is a palindrome.

But:

```text
123
```

reversed becomes:

```text
321
```

Therefore:

```text
123 != 321
```

and it is not a palindrome.

## Algorithm

```text
For each number:
    Reverse the number
    Compare with original

    If different:
        return false

Return true
```

## Key Idea

```text
Array
  ↓
Check each number
  ↓
Palindrome?
 ┌──────┴──────┐
Yes           No
 ↓             ↓
Continue      false
 ↓
All checked
 ↓
true
```

## Complexity

### Time Complexity

```text
O(n × d)
```

where `n` is the number of elements and `d` is the number of digits.

### Space Complexity

```text
O(1)
```

Only a few integer variables are used.

## Concepts Used

- Arrays
- Palindrome
- Number Reversal
- `%` Operator
- Integer Division
- Traversal
```