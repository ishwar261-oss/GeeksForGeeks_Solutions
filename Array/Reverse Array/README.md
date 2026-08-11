# Reverse an Array

## Problem

Given an array, reverse the order of its elements.

After reversing, the **first element becomes the last element**, the second element becomes the second-last, and so on.

---

## Example

### Input

```text
arr = [1, 2, 3, 4, 5]
```

After reversing:

```text
[5, 4, 3, 2, 1]
```

### Output

```text
[5, 4, 3, 2, 1]
```

---

## Approach

We use the **Two Pointer** approach.

Take two pointers:

```text
left  → first element
right → last element
```

Swap these two elements.

Then move:

```text
left++
right--
```

Continue until:

```text
left >= right
```

---

## Example

For:

```text
[1, 2, 3, 4, 5]
```

### Step 1

Swap:

```text
1 ↔ 5
```

Array:

```text
[5, 2, 3, 4, 1]
```

### Step 2

Swap:

```text
2 ↔ 4
```

Array:

```text
[5, 4, 3, 2, 1]
```

### Step 3

Both pointers reach the middle.

Done.

---

## Algorithm

1. Set `left = 0`.
2. Set `right = n - 1`.
3. While `left < right`:
   - Swap `arr[left]` and `arr[right]`.
   - Increase `left`.
   - Decrease `right`.
4. Return the reversed array.

---

## Complexity

### Time Complexity

```text
O(n)
```

Each element is processed at most once.

### Space Complexity

```text
O(1)
```

The array is reversed **in-place**, so no extra array is needed.

---

## Concepts Used

- Arrays
- Two Pointers
- Swapping
- In-place Algorithm

---

## Key Idea

The main idea is to swap elements from both ends:

```text
first  ↔ last
second ↔ second-last
...
```

Until the pointers meet.

---

## Tags

`Array` `Two Pointers` `Swapping` `In-Place`