//GFG Solution 
class Solution {
  public:
    int reverseDigits(int n) {
        int revNum = 0;
        while (n > 0) {
            revNum = revNum * 10 + n % 10;
            n = n / 10;
        }
        return revNum;
    }
};
// LeetCode Solution
class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while (x != 0) {
            int digit = x % 10;
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7))  return 0;
            if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit < -8)) return 0;
            result = result * 10 + digit;
            x /= 10;
        }
        return result;
    }
};
