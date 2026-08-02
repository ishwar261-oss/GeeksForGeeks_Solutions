# Count Ways To Reach The Nth Stair

## Problem

A person can climb either **1 stair** or **2 stairs** at a time.

Find the total number of distinct ways to reach the `n`th stair.

---

## Approach

- To reach stair `i`:
  - Take **1 step** from stair `i-1`.
  - Take **2 steps** from stair `i-2`.
- Therefore,

```
ways[i] = ways[i-1] + ways[i-2]
```

- This is the Fibonacci pattern.
- Use two variables to optimize space.

---

## Algorithm

1. If `n` is `0` or `1`, return `1`.
2. Initialize:
   - `prev2 = 1`
   - `prev1 = 1`
3. Traverse from `2` to `n`.
4. Compute:
   - `curr = prev1 + prev2`
5. Update the previous values.
6. Return the final answer.

---

## Example

### Input

```
4
```

### Output

```
5
```

### Explanation

Possible ways:

```
1+1+1+1
1+1+2
1+2+1
2+1+1
2+2
```

---

## Complexity

- **Time Complexity:** `O(n)`
- **Space Complexity:** `O(1)`

---

## Concepts Used

- Dynamic Programming
- Fibonacci
- Space Optimization

---

## Tags

`Dynamic Programming` `Math`