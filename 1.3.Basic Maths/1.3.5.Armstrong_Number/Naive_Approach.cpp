//GFG Solution
class Solution {
  public:
    bool armstrongNumber(int n) {
        int x=n;
        int sum=0;
        for(int i=0;i<=2;i++){
            int t=n%10;
            sum+=(t*t*t);
            n=n/10;
        }
        return sum==x;
    }
};
