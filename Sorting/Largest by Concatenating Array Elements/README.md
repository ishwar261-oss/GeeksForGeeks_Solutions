
# Largest by Concatenating Array Elements

**Platform:** GeeksforGeeks
**Difficulty:** Medium
**Topics:** Sorting, Strings, Greedy
**Language:** C++

## Problem

Given an array of non-negative integers, arrange them in such a way that their concatenation forms the largest possible number.

Return the resulting number as a string.

## Approach: Custom Comparator

1. Convert all integers into strings.
2. Sort the strings using a custom comparator.
3. Compare `a + b` with `b + a`.
4. Place `a` before `b` if `a + b` is greater.
5. Concatenate all sorted strings.
6. Handle the special case where all elements are zero.

## C++ Solution

```cpp
class Solution {
public:
    string findLargest(vector<int> &arr) {
        vector<string> nums;

        for (int x : arr) {
            nums.push_back(to_string(x));
        }

        sort(nums.begin(), nums.end(),
            [](string a, string b) {
                return a + b > b + a;
            });

        if (nums[0] == "0") {
            return "0";
        }

        string ans = "";

        for (string s : nums) {
            ans += s;
        }

        return ans;
    }
};
```

## Example

**Input:**
```text
[3, 30, 34, 5, 9]
```

**Sorted Order:**
```text
[9, 5, 34, 3, 30]
```

**Output:**
```text
9534330
```

## Complexity Analysis

- Time Complexity: O(n log n × k)
- Space Complexity: O(n × k)

Where n is the number of elements and k is the maximum number of digits.

## Key Learning

- Custom Sorting
- String Concatenation
- Greedy Approach
- Lambda Comparator

## Important Concept

Instead of comparing individual numbers, compare their concatenations:

`a + b > b + a`

This ensures the largest possible number is formed.

## Conclusion

Solved using custom sorting and greedy comparison.
