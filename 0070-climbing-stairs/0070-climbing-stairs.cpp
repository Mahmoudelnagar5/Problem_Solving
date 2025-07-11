class Solution {
public:
    int fun (int x,int n,vector<int>& dp){
        if(x == n) return 1;
        if(x > n) return 0;
        if(dp[x] != -1) return dp[x];
        return dp[x] = fun(x + 1,n,dp) + fun(x + 2,n,dp);
    };

    int climbStairs(int n) {
    vector<int> dp(n + 1, -1);
       return fun(0,n,dp);
    }
};