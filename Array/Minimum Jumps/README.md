# Minimum Jumps

## Problem

Given an array `arr[]` where each element represents the maximum number of steps that can be jumped forward from that position, find the minimum number of jumps required to reach the last index.

If it is not possible to reach the last index, return `-1`.

---

## Approach

- Use a greedy approach.
- Keep track of:
  - `farthest` → Farthest index that can be reached.
  - `currEnd` → End of the current jump range.
  - `jumps` → Number of jumps taken.
- Traverse the array and continuously update the farthest reachable index.
- When the current index reaches `currEnd`, make a new jump and update the range.
- If the current range cannot be extended, return `-1`.

---

## Algorithm

1. If the array has only one element, return `0`.
2. If the first element is `0`, return `-1`.
3. Initialize:
   - `jumps = 0`
   - `currEnd = 0`
   - `farthest = 0`
4. Traverse the array until the second last element.
5. Update:
   ```
   farthest = max(farthest, i + arr[i])
   ```
6. If `i == currEnd`:
   - Increment `jumps`.
   - Set `currEnd = farthest`.
   - If `currEnd >= n - 1`, return `jumps`.
   - If `currEnd == i`, return `-1`.
7. If the loop ends without reaching the last index, return `-1`.

---

## Example

### Input

```
5
2 3 1 1 4
```

### Output

```
2
```

### Explanation

- Jump from index `0` to index `1`.
- Jump from index `1` to index `4`.

Minimum jumps = **2**

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Greedy Algorithm
- Arrays
- Simulation

---

## Tags

`Greedy` `Array`