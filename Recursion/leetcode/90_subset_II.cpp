class Solution {
private:
    void subset(vector<int>& nums,vector<int> output,vector<vector<int>>& ans,int idx){
        if(idx == nums.size()){
            ans.push_back(output);
            return;
        }
        output.push_back(nums[idx]);
        subset(nums,output,ans,idx+1);

        output.pop_back();
        while(idx+1 < nums.size() && nums[idx] == nums[idx+1]) idx++;
        subset(nums,output,ans,idx+1);

    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        subset(nums,output,ans,0);
        return ans;
    }
};