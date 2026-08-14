# Missing and Repeating

## Problem

Given an array of size `n` containing numbers from `1` to `n`:

- One number appears **twice**.
- One number is **missing**.

Find both numbers.

The answer should be returned as:

```text
{repeating, missing}
```

---

## Example

```text
Input:
[4, 3, 6, 2, 1, 1]

Output:
{1, 5}
```

Explanation:

Numbers from `1` to `6` should be:

```text
1 2 3 4 5 6
```

But the array contains:

```text
1 2 3 4 6
```

and `1` appears twice.

Therefore:

```text
Repeating = 1
Missing = 5
```

---

## Approach

We can check every number from `1` to `n`.

For each number, count how many times it appears in the array.

- If it appears **twice**, it is the repeating number.
- If it appears **zero times**, it is the missing number.

For example:

```text
Array:
[4, 3, 6, 2, 1, 1]

1 → appears 2 times → Repeating
2 → appears 1 time
3 → appears 1 time
4 → appears 1 time
5 → appears 0 times → Missing
6 → appears 1 time
```

So the answer is:

```text
{1, 5}
```

---

## Algorithm

1. Get the size of the array as `n`.
2. Start checking numbers from `1` to `n`.
3. Count how many times the current number appears in the array.
4. If the count is `2`, store it as the repeating number.
5. If the count is `0`, store it as the missing number.
6. Return:
   ```text
   {repeating, missing}
   ```

---

## Key Idea

We compare the array with the numbers that **should be present**:

```text
Expected:
1 2 3 4 5 6

Array:
1 2 3 4 6 1
              ↑
          Repeating

Missing:
5
```

---

## Complexity

### Time Complexity

```text
O(n²)
```

For every number from `1` to `n`, we scan the entire array.

### Space Complexity

```text
O(1)
```

Only a few variables are used.

---

## Concepts Used

- Array
- Traversal
- Counting
- Nested Loops
- Searching

## Output

Return the result in this order:

```text
{repeating, missing}
```

**Important:** The repeating number comes first, followed by the missing number.