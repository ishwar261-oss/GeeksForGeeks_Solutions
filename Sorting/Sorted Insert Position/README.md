# Sorted Insert Position

**Platform:** GeeksforGeeks  
**Difficulty:** Easy  
**Topic:** Binary Search

## Problem

Given a sorted array of distinct integers and an integer `k`, return the index of `k` if it exists. Otherwise, return the index where `k` should be inserted to maintain sorted order.

## Approach: Binary Search

Since the array is sorted, use binary search to find the element efficiently.

1. Initialize `low = 0` and `high = arr.size() - 1`.
2. Calculate the middle index: `mid = low + (high - low) / 2`.
3. If `arr[mid] == k`, return `mid`.
4. If `arr[mid] < k`, search the right half by setting `low = mid + 1`.
5. Otherwise, search the left half by setting `high = mid - 1`.
6. If the loop ends without finding `k`, return `low`, the correct insertion index.

## Example

**Input:** `arr = [1, 3, 5, 6], k = 2`

**Output:** `1`

**Explanation:** The value `2` should be inserted at index `1` to maintain sorted order.

## Algorithm

```text
low = 0
high = n - 1

while low <= high:
    mid = low + (high - low) / 2

    if arr[mid] == k:
        return mid
    else if arr[mid] < k:
        low = mid + 1
    else:
        high = mid - 1

return low
```

## Key Idea

When binary search finishes without finding the target, `low` points to the position where the target belongs.

This also handles insertion at the beginning or end of the array.

## Complexity Analysis

- **Time Complexity:** O(log n)
- **Auxiliary Space:** O(1)

## Concepts Used

- Arrays
- Binary Search
- Sorted order
- Search and insertion position
