# GeeksforGeeks — Parenthesis Checker

## Problem

Given a string containing brackets:

```text
( ) { } [ ]
```

check whether all the brackets are **balanced and correctly arranged**.

## Example

```text
Input:
{[()]}

Output:
true
```

The brackets are correctly opened and closed.

Another example:

```text
Input:
{[(])}

Output:
false
```

The brackets are not correctly matched.

## Approach

Use a **Stack**.

Whenever we see an opening bracket:

```text
( { [
```

push it into the stack.

When we see a closing bracket:

```text
) } ]
```

check the top of the stack.

The closing bracket must match the most recently opened bracket.

For example:

```text
{ [ ( ) ] }
```

The stack works like:

```text
{
{ [
{ [ (
{ [
{
empty
```

At the end, the stack must be empty.

## Algorithm

1. Create an empty stack.
2. Traverse the string.
3. If the character is an opening bracket, push it.
4. If it is a closing bracket:
   - Check whether the stack is empty.
   - Check whether the top bracket matches it.
   - If it does not match, return `false`.
   - Otherwise, remove the top bracket.
5. After processing the complete string:
   - Empty stack → balanced.
   - Non-empty stack → not balanced.

## Key Idea

```text
Opening bracket → PUSH
Closing bracket → Check TOP → POP
```

The most recently opened bracket must be closed first.

## Complexity

**Time:** `O(n)`

**Space:** `O(n)`

## Concepts Used

- Stack
- String
- Brackets
- Matching
- LIFO

## Tags

`Stack` `String` `Parentheses` `Brackets`