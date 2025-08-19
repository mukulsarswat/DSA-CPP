## Problem Statement 
Given a number n, the task is to return the count of digits in this number.

## Examples
Input: n = 9999
Output: 4
Explanation: There are 4 digits in 999, which are 9, 9, 9 and 9.

Input: n = 528
Output: 3
Explanation: The are 3 digits in 256, which are 2, 5 and 8.

Input: n = 56481
Output: 5
Explanation: There are 5 digits in 58964, which are 1, 5, 8, 6 and 4.


## TRYOUT YOURSELF THEN GO TO SOLUTION Problem Link <i>[GFG](https://www.geeksforgeeks.org/problems/count-digits-1606889545/1)</i>

## Solutiion
1. Simple Maths Solution Using Concept of n/10 each time ones place value. [Solution](./simple_approach.cpp)
2. Logarithmic approach this more complex uses same concept but in log<sub>10</sub>n . [Solution](./log_solution.cpp)
