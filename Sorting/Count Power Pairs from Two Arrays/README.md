# Count Power Pairs from Two Arrays

**Difficulty:** Medium  
**Topics:** Sorting, Binary Search, Arrays

## Problem

Given two arrays `a[]` and `b[]`, count the number of pairs `(x, y)` such that:

\[
x^y > y^x
\]

Here, `x` is an element from array `a[]` and `y` is an element from array `b[]`.

Return the total number of valid pairs.

## Approach: Sorting + Binary Search

Instead of checking every possible pair using two nested loops, we can optimize the solution using sorting and binary search.

### Steps

1. Sort array `b[]` in ascending order.
2. Count the occurrences of special values `0, 1, 2, 3, 4` in array `b`.
3. Traverse every element `x` in array `a`.
4. If `x == 0`, skip it.
5. If `x == 1`, count only the zero values in `b`.
6. For other values, use `upper_bound()` to find the number of elements greater than `x`.
7. Add the special cases:
   - Elements `0` and `1` in `b` are valid for `x > 1`.
   - If `x == 2`, exclude elements `3` and `4`.
   - If `x == 3`, include elements equal to `2`.
8. Add all valid pairs and return the answer.

## C++ Solution

```cpp
class Solution {
public:
    int countPairs(vector<int>& a, vector<int>& b) {

        sort(b.begin(), b.end());

        int cnt0 = upper_bound(b.begin(), b.end(), 0) -
                   lower_bound(b.begin(), b.end(), 0);

        int cnt1 = upper_bound(b.begin(), b.end(), 1) -
                   lower_bound(b.begin(), b.end(), 1);

        int cnt2 = upper_bound(b.begin(), b.end(), 2) -
                   lower_bound(b.begin(), b.end(), 2);

        int cnt3 = upper_bound(b.begin(), b.end(), 3) -
                   lower_bound(b.begin(), b.end(), 3);

        int cnt4 = upper_bound(b.begin(), b.end(), 4) -
                   lower_bound(b.begin(), b.end(), 4);

        int ans = 0;

        for (int x : a) {

            if (x == 0)
                continue;

            if (x == 1) {
                ans += cnt0;
                continue;
            }

            ans += b.end() - upper_bound(b.begin(), b.end(), x);

            ans += cnt0 + cnt1;

            if (x == 2)
                ans -= cnt3 + cnt4;

            if (x == 3)
                ans += cnt2;
        }

        return ans;
    }
};
```

## Complexity Analysis

- **Time Complexity:** O(m log m + n log m)
  - Sorting array `b` takes O(m log m).
  - Each element of `a` uses binary search, taking O(log m).

- **Auxiliary Space Complexity:** O(1), excluding sorting implementation overhead.

Where:
- `n` = Size of array `a`.
- `m` = Size of array `b`.

## Key Learnings

- Using sorting to optimize pair-counting problems.
- Understanding `upper_bound()` and `lower_bound()`.
- Handling mathematical exceptions using special cases.
- Reducing brute-force O(n × m) solutions to O(m log m + n log m).

**Language:** C++