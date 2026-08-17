# Floor in a Sorted Array

## Problem

Given a **sorted array** and a number `x`, find the index of the **largest element that is less than or equal to `x`**.

This index is called the **floor index**.

If no element is less than or equal to `x`, return:

```text
-1
```

## Example

```text
Input:
arr = [1, 2, 4, 6, 10]
x = 7

Output:
3
```

Explanation:

The elements less than or equal to `7` are:

```text
1 2 4 6
```

The largest one is `6`.

Its index is:

```text
3
```

## Approach

Since the array is already **sorted**, we can use **Binary Search**.

We search for an element that is:

```text
<= x
```

Whenever we find such an element, it can be our answer.

But there may be a larger element that is also less than or equal to `x`.

Therefore, we continue searching in the **right half**.

If the middle element is greater than `x`, we search in the **left half**.

## Algorithm

1. Set `start = 0`.
2. Set `end = n - 1`.
3. Set `ans = -1`.
4. Find the middle element.
5. If `arr[mid] <= x`:
   - Store `mid` as the answer.
   - Move `start` to `mid + 1`.
6. If `arr[mid] > x`:
   - Move `end` to `mid - 1`.
7. Continue until the search range becomes empty.
8. Return `ans`.

## Example

```text
arr = [1, 2, 4, 6, 10]
x = 7
```

We need the largest value:

```text
<= 7
```

Possible values:

```text
1, 2, 4, 6
```

Largest value:

```text
6
```

Index:

```text
3
```

Therefore:

```text
Output:
3
```

## Important Point

The answer is the **index**, not the value.

For:

```text
arr = [1, 2, 4, 6, 10]
x = 7
```

The floor value is:

```text
6
```

But the required answer is:

```text
3
```

## Complexity

| Complexity | Value |
|------------|-------|
| Time       | `O(log n)` |
| Space      | `O(1)` |

## Key Idea

```text
arr[mid] <= x
      ↓
Possible answer
      ↓
Search right
      ↓
Find a larger valid element
```

If:

```text
arr[mid] > x
```

then:

```text
Search left
```

## Concepts Used

- Array
- Binary Search
- Sorted Array
- Searching
- Index Tracking