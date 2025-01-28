Problem Statements

Problem 1: Count of Pairs with Specific Path Length
Problem Statement:
Given a tree with n nodes, calculate the number of pairs of nodes (i, j) such that the shortest path between them has a specific length. The tree includes an additional edge between nodes x and y, which creates a cycle. BFS is used to compute the shortest paths between all pairs efficiently.

Problem 2: Check Prerequisites in a Course Schedule
Problem Statement:
You are given a set of courses and their prerequisites represented as directed edges in a graph. For a list of queries, determine whether one course is a prerequisite of another using BFS traversal.

Problem 3: Minimum Pushes for Typing a String
Problem Statement:
Given a string word, determine the minimum number of pushes required to type the string on a keyboard with a buffer of 8 characters. If the string length exceeds 8, the buffer scrolls to accommodate additional characters, with each subsequent scroll requiring extra pushes.
Solutions and Approach

Problem 1: Count of Pairs with Specific Path Length
Approach:
Represent the tree as an adjacency list, including the additional edge between nodes x and y.
For each pair of nodes (i, j), calculate the shortest path using BFS.
Maintain a count of pairs for each unique path length.
Key Steps:
Use BFS to compute the shortest path from every node to every other node.
Update the result array to store the count of pairs with the same path length.

Problem 2: Check Prerequisites in a Course Schedule
Approach:
Represent the courses and prerequisites as a directed graph using an adjacency list.
For each query (i, j), perform BFS to check if there is a path from course i to course j.
Key Steps:
Build the graph from the prerequisites list.
For each query, check the existence of a path using BFS.

Problem 3: Minimum Pushes for Typing a String
Approach:
Simulate typing the string with a buffer size of 8 characters.
Calculate the number of pushes required for the first 8 characters.
For additional characters, account for scrolling and calculate the extra pushes needed for subsequent segments.
Key Steps:
Process the first 8 characters as a single batch.
For remaining characters, calculate additional pushes based on their position in subsequent segments.

