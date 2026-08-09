# Kth Smallest Element — Brute Force

## Problem

Given an array `arr[]` and an integer `k`, find the **kth smallest element** in the array.

We need to return the value of the element that would appear at position `k` if the array were arranged in increasing order.

---

## Example

### Input

```text
arr = [7, 10, 4, 3, 20, 15]
k = 3
```

If we sort the array:

```text
[3, 4, 7, 10, 15, 20]
```

The 3rd smallest element is:

```text
7
```

### Output

```text
7
```

---

## Brute Force Approach

Instead of sorting the entire array, repeatedly find the smallest element.

For example:

```text
arr = [7, 10, 4, 3, 20, 15]
```

### First smallest

```text
3
```

### Second smallest

```text
4
```

### Third smallest

```text
7
```

Therefore:

```text
k = 3
answer = 7
```

---

## Algorithm

1. Start a loop from `1` to `k`.
2. Find the smallest element in the array.
3. Store its value.
4. Mark that element as used by replacing it with `INT_MAX`.
5. Repeat until the kth smallest element is found.
6. Return the last smallest value found.

---

## Why `INT_MAX`?

After finding an element, we need to ignore it in the next search.

So we replace it with:

```cpp
INT_MAX
```

Since `INT_MAX` is a very large integer, it will not normally be selected as the smallest element.

---

## C++ Code

```cpp
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int kthSmallest(vector<int> &arr, int k) {

        int n = arr.size();
        int smallest = -1;

        for (int count = 1; count <= k; count++) {

            smallest = INT_MAX;
            int index = -1;

            // Find the smallest element
            for (int i = 0; i < n; i++) {

                if (arr[i] < smallest) {
                    smallest = arr[i];
                    index = i;
                }
            }

            // Mark it as used
            arr[index] = INT_MAX;
        }

        return smallest;
    }
};
```

---

## Dry Run

For:

```text
arr = [7, 10, 4, 3, 20, 15]
k = 3
```

### First iteration

Smallest:

```text
3
```

Array becomes:

```text
[7, 10, 4, INT_MAX, 20, 15]
```

### Second iteration

Smallest:

```text
4
```

Array becomes:

```text
[7, 10, INT_MAX, INT_MAX, 20, 15]
```

### Third iteration

Smallest:

```text
7
```

Answer:

```text
7
```

---

## Complexity

### Time Complexity

```text
O(n × k)
```

For each of the `k` elements, we scan the complete array.

### Space Complexity

```text
O(1)
```

No extra array is used.

---

## Important Note

This approach is useful for understanding the problem, but it is not the most efficient solution.

Better approaches include:

- Sorting — `O(n log n)`
- Max Heap — `O(n log k)`
- QuickSelect — average `O(n)`

---

## Concepts Used

- Arrays
- Brute Force
- Searching
- Minimum Element
- `INT_MAX`

---

## Tags

`Array` `Brute Force` `Searching` `Kth Smallest`