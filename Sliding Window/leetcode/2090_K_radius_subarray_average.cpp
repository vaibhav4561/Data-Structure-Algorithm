class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n,-1);

        int i=0,j=0;
        long sum = 0;
        int win_size = 2*k+1;

        while(j<n){
            sum += nums[j];

            if(j-i+1 == win_size){
                ans[(i+j)/2] = sum / win_size;
                sum -= nums[i];
                i++;
            }
            j++;
        }
        return ans;    
    }
};