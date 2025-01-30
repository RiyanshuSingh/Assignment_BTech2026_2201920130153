Problem Statements

Problem 1: Find Maximum Fish in a Grid
Problem Statement:
Given a grid of integers where each cell represents the number of fish in that cell, find the maximum number of fish that can be collected by visiting all connected cells. A cell is considered connected if it is adjacent (left, right, up, or down) to another cell with a positive value.

Problem 2: Calculate Maximum Length Based on Multiplicative Sequence
Problem Statement:
Given an array of integers, determine the maximum possible length of a sequence where elements follow a specific multiplicative property. The sequence starts from any element and continues by repeatedly multiplying the value until the sequence becomes invalid.

Problem 3: Count Key Changes in a String
Problem Statement:
Given a string, calculate the number of transitions between different letters (case insensitive). A transition occurs when two consecutive characters in the string are different.

Solutions and Approach
Problem 1: Find Maximum Fish in a Grid
Approach:
Use Breadth-First Search (BFS) to traverse all connected components in the grid.
Each BFS traversal computes the total fish count for a connected component.
Track the maximum fish count among all components.

Key Steps:
Initialize a visited matrix to keep track of visited cells.
For each unvisited cell with a positive value, perform BFS to calculate the total fish count.
Update the maximum fish count found so far.

Algorithm:
Traverse the grid, and for each cell with a positive value, initiate a BFS.
During BFS, sum up the values of connected cells.
Return the maximum value obtained from all BFS traversals.

Problem 2: Calculate Maximum Length Based on Multiplicative Sequence
Approach:
Use a map to count the occurrences of each number in the input array.

For each unique number:
If the number is 1, handle it as a special case where the sequence length depends on half of the occurrences.
For other numbers, calculate the maximum length by continuously multiplying the current number until it exceeds the integer limit or the count drops below the required threshold.

Key Steps:
Traverse the array and store the frequency of each number in a map.
For each number, calculate the potential sequence length based on its multiplicative growth.
Track the maximum length among all calculated sequences.

Algorithm:
Iterate through the map of numbers and calculate the sequence length for each number.
Handle edge cases, such as when the number is 1 or when the value exceeds the maximum allowed integer size.
Return the maximum sequence length.

Problem 3: Count Key Changes in a String
Approach:
Traverse the string while comparing each character with the previous character.
Count the transitions where consecutive characters are different (ignoring case).

Key Steps:
Initialize a counter for the number of key changes.
Loop through the string and compare each character with the previous one.
Increment the counter whenever there is a change in characters (case insensitive).

Algorithm:
Convert both characters to lowercase using tolower() for case insensitivity.
Compare adjacent characters and increment the counter if they differ.

