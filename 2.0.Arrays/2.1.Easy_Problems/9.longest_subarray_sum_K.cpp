// class Solution {
//   public:
//     int longestSubarray(vector<int>& nums, int k) {

//         int n = nums.size();
//         int count = 0;
//         int maxi=0;
//         for (int start = 0; start < n; start++) {
//             int sum = 0;
//             for (int end = start; end < n; end++) {
//                 sum += nums[end];
//                 if (sum == k) {
//                     count++;
//                     maxi=max(1+end-start,maxi);
//                 }
                
//             }
//         }
//         return maxi;
 
        
//     }
// };
// Using map
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        map<int,int>mpp;
        int length = 0;
        int sum = 0;
        for(int i=0; i<arr.size();i++){
            sum += arr[i];
            if(sum == k) length = max(length, i+1);
            
            if(mpp.find(sum) == mpp.end())  mpp[sum] = i;
               
            if(mpp.find(sum-k) != mpp.end()) length = max(length, i-mpp[sum-k]);
             
        }
        return length;
    }
};
