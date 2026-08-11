# Find First and Last Occurrence of X

## Problem

Given a **sorted array** `arr[]` and an integer `x`, find:

- The **first occurrence** of `x`
- The **last occurrence** of `x`

Return both indices.

If `x` does not exist in the array, return:

```text
[-1, -1]
```

---

## Example

### Input

```text
arr = [1, 2, 2, 2, 3, 4]
x = 2
```

The value `2` occurs at:

```text
Index: 1  2  3
Value: 2  2  2
```

Therefore:

```text
First occurrence = 1
Last occurrence  = 3
```

### Output

```text
[1, 3]
```

---

## Approach

Since the array is **sorted**, we can use **Binary Search**.

We perform binary search **twice**.

### 1. Find First Occurrence

When:

```cpp
arr[mid] == x
```

we found `x`.

Store:

```cpp
first = mid;
```

But there might be another `x` on the left.

So continue searching left:

```cpp
end = mid - 1;
```

---

### 2. Find Last Occurrence

Again, when:

```cpp
arr[mid] == x
```

store:

```cpp
last = mid;
```

But there might be another `x` on the right.

So continue searching right:

```cpp
start = mid + 1;
```

---

## Algorithm

### First Occurrence

```text
start = 0
end = n - 1

while start <= end:

    mid = middle index

    if arr[mid] == x:
        save mid
        search left

    else if arr[mid] < x:
        search right

    else:
        search left
```

### Last Occurrence

```text
start = 0
end = n - 1

while start <= end:

    mid = middle index

    if arr[mid] == x:
        save mid
        search right

    else if arr[mid] < x:
        search right

    else:
        search left
```

---

## Dry Run

Consider:

```text
arr = [1, 2, 2, 2, 3, 4]
x = 2
```

### First Occurrence

Binary search eventually finds:

```text
mid = 1
arr[1] = 2
```

Store:

```text
first = 1
```

Then search to the left.

No earlier `2` exists.

Therefore:

```text
first = 1
```

---

### Last Occurrence

Binary search finds:

```text
mid = 2
arr[2] = 2
```

Store:

```text
last = 2
```

Search to the right.

Find:

```text
arr[3] = 2
```

So:

```text
last = 3
```

Final result:

```text
[1, 3]
```


## Why Two Binary Searches?

A normal binary search only tells us **whether `x` exists**.

Here we need two different positions:

```text
First occurrence → keep moving LEFT
Last occurrence  → keep moving RIGHT
```

Therefore, we perform binary search twice.

---

## Special Cases

### Element does not exist

```text
arr = [1, 2, 3, 4]
x = 5
```

Output:

```text
[-1, -1]
```

### Element appears once

```text
arr = [1, 2, 3, 4]
x = 3
```

Output:

```text
[2, 2]
```

### All elements are the same

```text
arr = [5, 5, 5, 5]
x = 5
```

Output:

```text
[0, 3]
```

---

## Complexity

### Time Complexity

```text
O(log n)
```

We perform two binary searches:

```text
O(log n) + O(log n)
= O(log n)
```

### Space Complexity

```text
O(1)
```

Only a few variables are used.

---

## Concepts Used

- Binary Search
- Sorted Array
- First Occurrence
- Last Occurrence
- Two Pointers / Search Boundaries

---

## Key Takeaway

When searching for the **first occurrence**:

```cpp
end = mid - 1;
```

When searching for the **last occurrence**:

```cpp
start = mid + 1;
```

This is a very important binary-search pattern.

---

## Tags

`Array` `Binary Search` `Sorted Array` `First Occurrence` `Last Occurrence`