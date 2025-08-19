//LeetCode Solution and GFG
class Solution {
    const int MOD=1e9;
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long num=0;
        int t=x;
        while(t>0){
            num=num%MOD;
            num=(num*10)+(t%10);
            t=t/10;
        }
        return num==x;
    }
};
