class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c = count(nums.begin(),nums.end(),0);
        vector<int>ans;
        for (int i = 0; i < nums.size(); i++){
            if(nums[i]!=0){
                ans.push_back(nums[i]);
            }
        }
        for (int i = 0; i < c; i++){
            ans.push_back(0);
        }
        nums = ans;
    }
};