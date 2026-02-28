class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        
        int prev2 = 0;  // dp[i-2]
        int prev1 = 0;  // dp[i-1]
        
        for(int i = 2; i <= n; i++){
            int curr = min(
                prev1 + cost[i-1],
                prev2 + cost[i-2]
            );
            
            prev2 = prev1;
            prev1 = curr;
        }
        
        return prev1;
    }
};

// memoization approach

// class Solution {
// public:
//     int solve(int idx, vector<int>& cost, vector<int>& dp){
//         if(idx <= 1) return 0;   // can start from 0 or 1
        
//         if(dp[idx] != -1) return dp[idx];

//         int oneStep = solve(idx-1, cost, dp) + cost[idx-1];
//         int twoStep = solve(idx-2, cost, dp) + cost[idx-2];

//         return dp[idx] = min(oneStep, twoStep);
//     }

//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size();
//         vector<int> dp(n+1, -1);
//         return solve(n, cost, dp);
//     }
// };