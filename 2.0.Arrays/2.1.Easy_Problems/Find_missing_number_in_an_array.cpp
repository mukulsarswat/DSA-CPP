//LeetCode Solutions
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i) return i;
        }
        return nums.size();
    }
};
//GFG solutions
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        
        int n=arr.size()+1;
        long sum=0;
        long totalSum =(long)n*(n+1)/2;
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
        }
        
        return (int)(totalSum - sum);
    }
};
