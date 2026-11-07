Lab 02 Queue Operations
Problem Statement:
This lab implements the Queue data structure using arrays, enforcing the FIFO principle.
It supports insert, delete, and display operations.
Approach:
The queue operates on a First In, First Out basis. 
We maintain 'front' and 'rear' pointers where elements are added at the rear and removed from the front.
Complexity Analysis:
 * Time Complexity: O(1) for both operations.
 * Space Complexity: O(MAX) due to fixed array size.
Sample I/O:
Input: Insert 10, Insert 20, Delete.
Output: Queue contains 10 20; Deleted item is 10.
Learning Outcomes:
I learned to manage circular pointer logic and understood the strict sequencing required in FIFO structures.
