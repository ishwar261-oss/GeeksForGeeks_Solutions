# Duplicates in a Limited Range Array

## Problem

Given an array `arr[]` of size `n` where every element lies in the range `0` to `n-1`, find all elements that appear more than once.

Return the duplicate elements in increasing order. If there are no duplicates, return an empty array.

---

## Approach

- Since every element is in the range `0` to `n-1`, create a frequency array of size `n`.
- Traverse the given array and count the frequency of each element.
- Traverse the frequency array:
  - If the frequency of an element is greater than `1`, it is a duplicate.
  - Add it to the answer.
- Return the list of duplicate elements.

---

## Algorithm

1. Create a frequency array `freq` of size `n` initialized with `0`.
2. Traverse the input array:
   - Increment `freq[arr[i]]`.
3. Traverse the frequency array:
   - If `freq[i] > 1`, add `i` to the answer.
4. Return the answer vector.

---

## Example

### Input

```
arr = [0, 3, 1, 2, 3, 1]
```

### Output

```
[1, 3]
```

### Explanation

- Frequency of `1` = 2
- Frequency of `3` = 2

Both occur more than once, so the answer is `[1, 3]`.

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(n)`

---

## Concepts Used

- Arrays
- Frequency Counting
- Hashing

---

## Tags

`Array` `Hashing` `Frequency Counting`