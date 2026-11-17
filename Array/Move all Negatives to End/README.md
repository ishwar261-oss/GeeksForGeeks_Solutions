# Move all Negatives to End

**Difficulty:** Easy  
**Topic:** Arrays, Stable Partitioning  
**Language:** C++

## Problem Description

Given an unsorted array containing positive and negative integers, move all negative elements to the end of the array without changing the relative order of positive and negative elements.

The modification must be performed on the original array.

## Approach: Temporary Vector

1. Create an empty temporary vector.
2. Traverse the original array and insert all non-negative elements.
3. Traverse the array again and insert all negative elements.
4. Copy the temporary vector back into the original array.

This approach maintains the relative order of both positive and negative elements.

## C++ Solution

```cpp
class Solution {
public:
    void segregateElements(vector<int>& arr) {
        vector<int> temp;

        for (int x : arr) {
            if (x >= 0) {
                temp.push_back(x);
            }
        }

        for (int x : arr) {
            if (x < 0) {
                temp.push_back(x);
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = temp[i];
        }
    }
};
```

## Example

**Input:**
```text
[1, -1, 3, 2, -7, -5, 11, 6]
```

**Output:**
```text
[1, 3, 2, 11, 6, -1, -7, -5]
```

## Complexity Analysis

- **Time Complexity:** O(n) — The array is traversed three times.
- **Space Complexity:** O(n) — An additional temporary vector is used.

## Key Learnings

- Array traversal.
- Stable partitioning.
- Using temporary vectors.
- Maintaining relative order of elements.
- In-place array modification by copying results back.

**Problem Link:** https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
