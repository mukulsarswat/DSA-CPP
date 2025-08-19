## Problem Statement  Problem Link [GFG](https://www.geeksforgeeks.org/problems/palindrome0746/1) and [LeetCode](https://leetcode.com/problems/palindrome-number/)
Given an integer x, return true if x is a <i> [Palindrome Number](https://en.wikipedia.org/wiki/Palindromic_number) </i> , and false otherwise.


## Examples    
Example 1:
      Input: x = 3663
      Output: true
      Explanation: 3663 reads as 3663 from left to right and from right to left.

Example 2:
      Input: x = -555
      Output: false
      Explanation: From left to right, it reads -555. From right to left, it becomes 555-. Therefore it is not a palindrome.
## Tryout YourSelf Then go to Solution
1. By Reversing Number and Check for Palindrome.[Solution](./By_Reversing_Number.cpp)  <strong> TC: O(log10 n) and O(1) Space <strong>
2. By using no. as string(_to_string). [Solution](./Number_as_String.cpp)    <strong>       TC: O(log10 n) and O(log10 n) Space </strong>
