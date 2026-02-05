class Solution {
private:
    int atmost(vector<int>& nums, int goal){
        if(goal < 0) return 0;

        int l=0, r=0;
        int sum = 0;
        int ans = 0;

        while(r < nums.size()){
            sum += nums[r];

            while(sum > goal ){
                sum -= nums[l];
                l++;
            }
            
            ans += r-l+1;
            r++;
        }
        return ans;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2 == 0) nums[i] = 0;
            else nums[i] = 1;
        }
        return atmost(nums,k) - atmost(nums,k-1);
    }
};