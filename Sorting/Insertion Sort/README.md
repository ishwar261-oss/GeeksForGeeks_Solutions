
# Insertion Sort — GeeksforGeeks

## Problem
Given an array of integers, sort the array in ascending order using the Insertion Sort algorithm.

## Approach
Insertion Sort divides the array into a sorted part and an unsorted part. It takes each element from the unsorted part and moves it left until it reaches its correct position in the sorted part.

## Algorithm
1. Start from index `1`, as the first element is already sorted.
2. Set `j = i`.
3. Compare `arr[j]` with `arr[j - 1]`.
4. If the previous element is greater, swap them.
5. Decrease `j` and continue until the element reaches its correct position or `j == 0`.
6. Repeat for all remaining elements.

## Example

Input:
`[5, 3, 4, 1, 2]`

Pass 1: `[3, 5, 4, 1, 2]`

Pass 2: `[3, 4, 5, 1, 2]`

Pass 3: `[1, 3, 4, 5, 2]`

Pass 4: `[1, 2, 3, 4, 5]`

Output:
`[1, 2, 3, 4, 5]`

## Key Idea
Move each element left by swapping it with larger previous elements until it reaches its correct position.

## Complexity
- Best-case time: `O(n)`
- Average-case time: `O(n²)`
- Worst-case time: `O(n²)`
- Auxiliary space: `O(1)`

## Concepts
- Arrays
- Sorting
- Nested Loops
- In-place Algorithm
- Comparison and Swapping
