//GFG Solution
class Solution {
  public:
    int gcdRecursive(int a, int b) {
        if (b == 0)
            return a;
        return gcdRecursive(b, a % b);
    }
};
