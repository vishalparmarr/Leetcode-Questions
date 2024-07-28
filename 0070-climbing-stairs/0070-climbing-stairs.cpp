class Solution {
private:
    int solve(vector <int> &dp, long n, long i) {
        
        //base case
        if(i == n)
            return 1;
        
        if(i > n)
            return 0;
        
        if(dp[i] != -1)
            return dp[i];
        
        dp[i] = solve(dp, n, i+1) + solve(dp, n, i+2);
        return dp[i];
    }
    
public:
    int climbStairs(int n) {
        
        vector <int> dp(n+1);
        
        for(int i = 0; i <= n; i++) 
            dp[i] = -1;
        
        int ans = solve(dp, n, 0);
        return ans;
    }
};