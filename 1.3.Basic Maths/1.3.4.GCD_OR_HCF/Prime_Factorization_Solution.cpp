// GFG Solution Which is solution for a extension of the same problem if asked for all factors
class Solution{
  public:
    vector<int> primeFactors(int n) {
        vector<int> factors;
        for (int i = 2; i <= n; i++) {
            while (n % i == 0) {
                factors.push_back(i);
                n /= i;
            }
        }
        return factors;
    }
};
