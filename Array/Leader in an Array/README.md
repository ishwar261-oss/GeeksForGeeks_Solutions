# Leader in an Array

## Problem Statement
Given an array `arr[]`, find all the **leaders** in the array.

An element is considered a **leader** if it is **greater than or equal to all the elements to its right**. The rightmost element is always a leader.

---

## Example

### Input
```text
arr = [16, 17, 4, 3, 5, 2]
```

### Output
```text
[17, 5, 2]
```

### Explanation
- 17 is greater than all elements to its right.
- 5 is greater than 2.
- 2 is the last element, so it is always a leader.

---

## Approach

Instead of checking every element with all elements on its right (O(n²)), traverse the array from **right to left**.

### Algorithm
1. Start from the last element.
2. Keep track of the maximum element seen so far.
3. If the current element is greater than or equal to the current maximum:
   - It is a leader.
   - Update the maximum.
4. Reverse the collected leaders before returning.

---

## Dry Run

Input:

```text
arr = [16, 17, 4, 3, 5, 2]
```

| Index | Value | Current Maximum | Leader? | Leaders |
|------:|------:|---------------:|:-------:|:-------:|
| 5 | 2 | 2 | ✅ | [2] |
| 4 | 5 | 5 | ✅ | [2, 5] |
| 3 | 3 | 5 | ❌ | [2, 5] |
| 2 | 4 | 5 | ❌ | [2, 5] |
| 1 | 17 | 17 | ✅ | [2, 5, 17] |
| 0 | 16 | 17 | ❌ | [2, 5, 17] |

Reverse the result:

```text
[17, 5, 2]
```

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## Pattern

- Right-to-Left Traversal
- Running Maximum
- Array Traversal

---

## C++ Solution

```cpp
class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();

        vector<int> ans;
        int maxi = arr[n - 1];

        ans.push_back(maxi);

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= maxi) {
                ans.push_back(arr[i]);
                maxi = arr[i];
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
```

---

## Key Takeaway

Maintain the **maximum element from the right** while traversing the array once. Any element that is greater than or equal to this maximum is a leader.