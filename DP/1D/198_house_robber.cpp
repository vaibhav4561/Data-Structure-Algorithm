class Solution {
public:
    int rob(vector<int>& nums) {
        int prev2 = 0;  // dp[i-2]
        int prev1 = nums[0];  // dp[i-1]

        for (int i=1;i < nums.size(); i++) {
            int take = nums[i];
            if(i>1) take += prev2;

            int notTake = 0 + prev1;

            int curr = max(take, notTake);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};
