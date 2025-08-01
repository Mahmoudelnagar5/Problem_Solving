class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = nums[0] , ans = nums[0];
        for(int i = 1;i<nums.size();i++){
            mx = max(nums[i],nums[i] + mx);
            ans = max(ans,mx);
        }
        return ans;   
    }
};