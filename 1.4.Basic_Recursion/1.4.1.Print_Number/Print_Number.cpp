// GFG Solution
class Solution {
  public:
    void printNos(int N) {
        cout<<N<<" ";
        N-=1;
        if(N==0){
            return;
        }
        printNos(N);
    }
};
