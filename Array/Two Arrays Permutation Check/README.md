# Two Arrays Permutation Check

**Difficulty:** Easy  
**Accuracy:** 42.18%  
**Points:** 2

## Problem Statement

Given two arrays `a[]` and `b[]` of equal size, check whether they are permutations of each other.

Two arrays are permutations if they contain exactly the same elements with the same frequency, regardless of their order.

## Approach

- Sort both arrays in ascending order.
- After sorting, compare the two arrays.
- If both arrays are equal, they contain the same elements with the same frequencies.
- Return `true` if they are equal; otherwise, return `false`.

## Complexity Analysis

- **Time Complexity:** O(n log n), because both arrays are sorted.
- **Space Complexity:** O(1) auxiliary space, ignoring sorting implementation overhead.

## Key Concept

**Sorting:** Sorting helps arrange elements in the same order so that two arrays can be compared easily.