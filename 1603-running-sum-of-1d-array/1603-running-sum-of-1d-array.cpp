class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        for(int i = 0; i < n; i++ ){
            if(i){
            nums[i] += nums[i - 1];
            } 
            ans[i] = nums[i];
        }
        return ans;
    }
};