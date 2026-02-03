class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        int minI = -1, maxI = -1, culprit = -1;
        long long ans = 0;
        int temp = 0;

        for(int i=0;i<n;i++){
            if(nums[i] == minK) minI = i;
            if(nums[i] == maxK) maxI = i;
            if(nums[i] < minK || nums[i] > maxK) culprit = i;
            temp = min(minI,maxI) - culprit;
            if(temp > 0) ans += temp;
        }
        return ans;
    }
};