//GFG solution
class Solution{
   private:
    int isPalindromeUtil(string & s, int left, int right) {
    
        // Base case
        if (left >= right) 
            return 1;
        if (s[left] != s[right]) 
            return 0;
        return isPalindromeUtil(s, left + 1, right - 1);
    }
   public:  
    int isPalindrome(string s){
        int left = 0, right = s.length() - 1;
        return isPalindromeUtil(s, left, right);
    }
}
};
