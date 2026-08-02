# Check Binary String

## Problem
Given a string, check whether the string contains only binary characters (0 and 1).

## Approach
Traverse every character of the string.

- If a character is not '0' or '1', the string is not binary.
- If all characters are valid, the string is binary.

## Algorithm

1. Start traversing the string.
2. Check each character.
3. Return false if an invalid character is found.
4. Otherwise return true.

## Complexity Analysis

Time Complexity: O(N)

Space Complexity: O(1)

## Language Used
- C++