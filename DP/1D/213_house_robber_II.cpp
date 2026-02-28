class Solution {
public:
    int houserob1(vector<int>& nums,int start,int end) {
        int prev2 = 0;  // dp[i-2]
        int prev1 = nums[start];  // dp[i-1]

        for (int i=start+1;i < end; i++) {
            int take = nums[i];
            if(i>1) take += prev2;

            int notTake = 0 + prev1;

            int curr = max(take, notTake);
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0]; 
        return max(houserob1(nums,0,n-1), houserob1(nums,1,n));
    }
};