Lab 03 Circular Queue Operations
Problem Statement:
This lab implements the Circular Queue data structure to resolve memory wastage in linear queues
by connecting the rear back to the front using modulo operations.
Approach:
The queue utilizes wrap-around logic. 
When elements are deleted, the front pointer advances, allowing new data to be inserted into vacated spaces.
Complexity Analysis:
 * Time Complexity: O(1) for insert and delete.
 * Space Complexity: O(MAX) due to fixed array size.
Sample I/O:
Input: Insert 11, Insert 22, Insert 33, Display, Delete. Output: Elements 11 22 33; deleted item 11.
Learning Outcomes:
I mastered circular buffer implementation and the practical application of modulo arithmetic in memory management.
