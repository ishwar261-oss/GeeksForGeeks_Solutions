# Majority Element

## Problem Statement

Given an array `arr[]`, find the **majority element**. A majority element is an element that appears **more than `n/2` times** in the array. If no such element exists, return `-1`.

---

## Example

### Input
```text
arr = [2, 2, 1, 2, 3, 2, 2]
```

### Output
```text
2
```

### Explanation

The element `2` appears **5 times** in an array of size **7**.

Since **5 > 7/2**, `2` is the majority element.

---

## Approach (Boyer-Moore Voting Algorithm)

The Boyer-Moore Voting Algorithm finds the majority element in **O(n)** time using **O(1)** extra space.

### Algorithm

1. Initialize:
   - `candidate = -1`
   - `count = 0`
2. Traverse the array:
   - If `count == 0`, choose the current element as the new candidate.
   - If the current element equals the candidate, increment `count`.
   - Otherwise, decrement `count`.
3. After the first traversal, the candidate is the potential majority element.
4. Traverse the array again to count the candidate's frequency.
5. If its frequency is greater than `n/2`, return the candidate; otherwise return `-1`.

---

## Dry Run

Input:

```text
[2, 2, 1, 2, 3, 2, 2]
```

| Index | Element | Candidate | Count |
|------:|--------:|----------:|------:|
| 0 | 2 | 2 | 1 |
| 1 | 2 | 2 | 2 |
| 2 | 1 | 2 | 1 |
| 3 | 2 | 2 | 2 |
| 4 | 3 | 2 | 1 |
| 5 | 2 | 2 | 2 |
| 6 | 2 | 2 | 3 |

Candidate after first traversal = **2**

Verification:

Frequency of `2` = **5**

Since **5 > 7/2**, the answer is **2**.

---

## C++ Solution

```cpp
class Solution {
public:
    int majorityElement(vector<int>& arr) {

        int candidate = -1;
        int count = 0;

        for (int num : arr) {

            if (count == 0) {
                candidate = num;
                count = 1;
            }
            else if (candidate == num) {
                count++;
            }
            else {
                count--;
            }
        }

        count = 0;

        for (int num : arr)
            if (num == candidate)
                count++;

        return (count > arr.size() / 2) ? candidate : -1;
    }
};
```

---

## Complexity Analysis

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Key Insight

The Boyer-Moore Voting Algorithm works by **canceling out different elements**. Since the majority element appears more than half the time, it cannot be completely eliminated during this cancellation process. The remaining candidate is then verified in a second pass.

---

## Complexity Summary

| Approach | Time Complexity | Space Complexity |
|----------|-----------------|------------------|
| Boyer-Moore Voting | **O(n)** | **O(1)** ✅ |
| Hash Map | O(n) | O(n) |
| Sorting | O(n log n) | O(1) |

---

### ✅ Optimal Approach

- **Algorithm:** Boyer-Moore Voting Algorithm
- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`
- **Reason:** Linear traversal with constant extra space makes it the most efficient solution.