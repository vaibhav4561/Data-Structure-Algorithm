class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=0;
        int len = 0;
        int maxLen = 0;
        int zeroCnt = 0;
        
        while(j < n){
            if(nums[j] == 0)zeroCnt++;
            else len++;

            if(zeroCnt > 1){
                maxLen = max(maxLen,len);
                while(nums[i] == 1){
                    len--;
                    i++;
                }
                if(nums[i] == 0)i++;
                zeroCnt--;
            }
            j++;
        }
        maxLen = max(maxLen,len);
        if(maxLen == n) return n-1;
        return maxLen;
    }
};