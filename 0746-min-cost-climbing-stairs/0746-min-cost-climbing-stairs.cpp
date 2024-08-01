class Solution {
private:
    
    // Top-Down Approach
    int solve(vector<int>& cost, vector<int>& dp, int n) {
        
        //base case
        if(n == 0)
            return cost[0];
        if(n == 1)
            return cost[1];
        
        //step3 if already present
        if(dp[n] != -1)
            return dp[n];
        
        //step2 store the ans
        dp[n] = cost[n] + min(solve(cost, dp, n-1), solve(cost, dp, n-2));
        return dp[n];
    }
    
    //Bottom-Up Approach
    int solve2(vector<int>& cost, int n) {
        
        //step1: create a dp  array
        vector<int> dp(n+1);
        
        //step2: base case
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        //step3: 
        for(int i = 2; i < n; i++)
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        
        return min(dp[n-1], dp[n-2]);
    }
    
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        
//         //step1: create a dp array
//         vector<int> dp(n+1, -1);
        
//         int ans = min(solve(cost, dp, n-1), solve(cost, dp, n-2));
//         return ans;
        
        return solve2(cost, n);
        
    }
};