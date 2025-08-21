// LEETCODE SOLUTION
class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        for (char c : s) {
            if (isalnum(c)) {
                filtered += tolower(c); // Because of the spaces and speacial characters
            }
        }
        s=filtered;
        int n=s.length();
        int left=0;
        int right=n-1;
        while(left<right){
            if(s[left]!=s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};


// GFG SOLUTION
class Solution {
  public:
    bool isPalindrome(string& s) {
        int left = 0;
        int right = s.length()-1;
        
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left ++;
            right --;
        }
        return true;
    }
};
