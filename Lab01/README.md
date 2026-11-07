Lab 01 Stack Operations
Problem Statement:
In this lab, we have implemented the stack data structure using arrays.
The first program implements a basic stack, while the second manages two stacks within a single array (Multiple Stack)
supporting push, pop, and display operations.
Approach:
Stacks follow the 'LIFO' (Last In, First Out) principle. 
We utilize a 'top' variable that increments on push and decrements on pop.
In the Multiple Stack implementation, two 'top' pointers operate from opposite ends of the array to partition memory.
Complexity Analysis:
 * Time Complexity: O(1) for push and pop operations, as they involve direct index access.
 * Space Complexity: O(MAX) due to the fixed-size array allocation.
Sample I/O:
Input: Push 55, Push 44, Pop.
Output: Stack contains 55 44; Popped item is 44.
Learning Outcomes:
Through this lab, I gained a practical understanding of LIFO mechanics, memory management in constrained arrays,
 and the trade-offs of static versus dynamic memory allocation.
