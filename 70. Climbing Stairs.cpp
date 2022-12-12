class Solution {
public:
    int climbStairs(int n) 
    {
        // we should put 0 at the beginning to preserve the recurrence relation.
        int dp[46] = {0,1,2}; 
        for (int i = 3; i <= n; i++)
            dp[i] = dp[i-1] + dp[i-2];
        return dp[n];
    }
};
