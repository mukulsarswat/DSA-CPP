//GFG Solution
class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
      
       vector<int> ans;
       ans.push_back(arr[0]);
       for(int i =1 ;i <arr.size();i++){
           if(arr[i] != arr[i - 1]){
               ans.push_back(arr[i]);
           }
       }
       return ans;
    }
};

// LeetCode Solution
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1; 

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
