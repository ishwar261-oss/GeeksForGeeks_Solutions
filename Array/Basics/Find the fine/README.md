# Find the Fine

## Problem

Given an array of car registration numbers and their corresponding fines, calculate the **total fine** collected on a particular date.

The rule is:

* If the date is **even**, cars with **odd** registration numbers are fined.
* If the date is **odd**, cars with **even** registration numbers are fined.

Return the total fine collected.

## Approach

We iterate through all cars and check whether the parity of the car number is different from the parity of the date.

### Condition

If the date is even:

```text
car number is odd → fine
```

If the date is odd:

```text
car number is even → fine
```

This can be checked using the `%` operator.

```cpp
if ((date % 2 == 0 && car[i] % 2 != 0) ||
    (date % 2 != 0 && car[i] % 2 == 0))
```

If the condition is true, add the corresponding fine to the answer.

## Algorithm

```text
1. Initialize total fine as 0.
2. Traverse all cars.
3. Check the parity of the date.
4. If the car number violates the rule, add its fine.
5. Return the total fine.
```

## Example

```text
car  = [12, 23, 34, 45]
fine = [100, 200, 300, 400]
date = 12
```

The date is even, so cars with **odd** registration numbers are fined.

```text
23 → 200
45 → 400
```

Therefore:

```text
Total Fine = 200 + 400
           = 600
```
## Complexity

### Time Complexity

```text
O(n)
```

We traverse the arrays once.

### Space Complexity

```text
O(1)
```

Only one extra variable is used.

## Concepts Used

* Arrays
* Traversal
* `%` Modulo Operator
* Conditional Statements
* Parity (Even/Odd)
* Greedy / Direct Simulation
