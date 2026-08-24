# Sum of Elements in an Array

## Problem

Given an array, find the sum of all its elements.

## Example

```text
Input:
[1, 2, 3, 4, 5]

Output:
15
```

## Approach

Traverse the array and keep adding each element to `sum`.

```text
sum = 0

1 → 1
2 → 3
3 → 6
4 → 10
5 → 15
```

## Code

```cpp
class Solution {
public:
    int arraySum(vector<int>& arr) {
        int sum = 0;

        for (int x : arr) {
            sum += x;
        }

        return sum;
    }
};
```

## Complexity

- **Time:** O(n)
- **Space:** O(1)

## Key Concept

Array Traversal and Accumulation.