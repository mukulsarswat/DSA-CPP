// LeetCode Solution
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) cnt++;
            else cnt=0;
            maxi=max(cnt,maxi);
        }
        return maxi;
    }
};

//GFG Solution
// **** Solution 1 *****
class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        int cnt1,cnt0=0;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1) {
                cnt1++;
                cnt0=0;
            }
            else{
                cnt0+=1;
    
                
            }ans =max(ans,max(cnt1,cnt0));
             if(arr[i]==0) cnt1=0;
             else cnt0=0;
            
        }
        return ans;
        
    }
};
// ***Solutiin 2 ****//
class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        vector<int> sum(2, 0);
        int ans=0;
        for(auto z: arr){
            if(z==0)
              sum[0]++;
            if(z==1)
              sum[1]++;
             
            ans = max(ans, max(sum[0], sum[1]));
            
            if(z==1)
              sum[0]=0;
            if(z==0)
              sum[1]=0;
        }
        
        return ans;
    }
};
