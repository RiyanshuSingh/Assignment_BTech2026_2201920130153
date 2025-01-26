Problem Statements

Problem 1: Sort Colors
Problem Statement: Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

Problem 2: Subarray Sum Calculation
Problem Statement: Given an array nums, calculate the sum of elements for all valid subarrays where the index of a subarray start is constrained by the value of the current element. The problem focuses on efficiently calculating the subarray sums with proper constraints.

Problem 3: Count Servers That Communicate
Problem Statement: In a 2D grid, each cell represents a server (1) or no server (0). Two servers communicate if they are in the same row or column. Count the total number of servers that can communicate with at least one other server.
Coding Platforms Used

All problems are sourced from LeetCode, a widely-used competitive programming platform for practicing coding problems.
Approach and Solution Explanation

Problem 1: Highest Peak in a Grid

Approach:
Use a queue for BFS traversal starting from all water cells (1).
Maintain a visited array to avoid revisiting cells.
Increment the height level for each layer of BFS.
Solution: Implemented in C++ using nested loops to initialize the BFS queue and process neighbors level-by-level.
Problem 2: Subarray Sum Calculation

Approach:
For each element nums[i], calculate the valid starting index of the subarray based on its value.
Sum up all elements from the start index to the current index.
Use a nested loop to calculate the sum efficiently.
Solution: Implemented in C++ using constraints to limit unnecessary iterations.
Problem 3: Count Servers That Communicate

Approach:
Perform BFS to traverse the grid starting from each unvisited server.
Count all connected servers in the same row and column.
Use a visited matrix to ensure no server is double-counted.
Solution: Implemented in C++ with helper functions to modularize the BFS logic.
