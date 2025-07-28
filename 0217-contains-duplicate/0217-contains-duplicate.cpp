class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<long long,long long>mp;
        for(int i =0;i< nums.size();i++)mp[nums[i]]++;
        bool alt = false;
        for(auto &[x,y]:mp){
            if(y>=2){
                alt = true;
                break;
            }
        }
        return alt;
    }
    
};