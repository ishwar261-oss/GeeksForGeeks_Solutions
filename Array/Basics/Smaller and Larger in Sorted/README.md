# Smaller and Larger in Sorted Array

## Problem

Given a sorted array and an integer `x`, find:

- The largest element smaller than `x`.
- The smallest element larger than `x`.

If either element does not exist, return `-1` for that value.

## Example

```text
Input:
arr = [1, 2, 4, 6, 8]
x = 5

Output:
[4, 6]
```

## Explanation

Elements smaller than `5` are:

```text
1, 2, 4
```

The largest among them is:

```text
4
```

Elements larger than `5` are:

```text
6, 8
```

The smallest among them is:

```text
6
```

Therefore:

```text
[4, 6]
```

## Approach

Since the array is sorted, traverse the array from left to right.

For every element:

- If it is smaller than `x`, update `smaller`.
- When an element greater than `x` is found, it is the smallest larger element, so store it and stop.

## Algorithm

```text
1. Set smaller = -1.
2. Set larger = -1.
3. Traverse the sorted array.
4. If arr[i] < x:
       smaller = arr[i]
5. If arr[i] > x:
       larger = arr[i]
       break
6. Return smaller and larger.
```

## Key Idea

```text
arr = [1, 2, 4, 6, 8]
              x = 5

          4   |   6
        smaller  larger
```

Because the array is sorted:

```text
last smaller element = largest smaller
first larger element = smallest larger
```

## Edge Cases

### No Smaller Element

```text
arr = [5, 6, 7]
x = 5
```

Result:

```text
[-1, 6]
```

### No Larger Element

```text
arr = [1, 2, 3]
x = 3
```

Result:

```text
[2, -1]
```

### Exact Value Exists

```text
arr = [1, 3, 5, 7]
x = 5
```

Result:

```text
[3, 7]
```

The value equal to `x` is not considered smaller or larger.

## Complexity

### Time Complexity

```text
O(n)
```

### Space Complexity

```text
O(1)
```

Apart from the returned result.

## Concepts Used

- Arrays
- Sorted Arrays
- Comparison
- Traversal
- Searching
```