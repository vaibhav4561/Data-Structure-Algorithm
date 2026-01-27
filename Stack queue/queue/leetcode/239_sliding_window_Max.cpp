class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        vector<int> ans;
        
        //filling 1st k elements
        for(int i=0;i<k;i++){
            
            while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            
        }
        
        //first maximun
        ans.push_back(nums[dq.front()]);
        
        for(int i = k; i<nums.size(); i++) {
             //first pop out of window element
             
            if(!dq.empty() && (i - dq.front())>=k ) {
                dq.pop_front();
             }

            while(!dq.empty() && nums[dq.back()] < nums[i]){
                dq.pop_back();
            } 
             //then push current element
                dq.push_back(i);
             
            // put in ans
            ans.push_back(nums[dq.front()]);
        }

        return ans;
    }
};