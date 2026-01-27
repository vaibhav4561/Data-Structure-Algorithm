class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        queue<int> q;
        vector<int> ans;
        
        //filling 1st k elements
        for(int i=0;i<k;i++){
            if(arr[i] < 0){
                q.push(i);   
            }
        }
        
        //first negative
        if(q.size() > 0){
            ans.push_back(arr[q.front()]);
        }
        else{
            ans.push_back(0);
        }
        
        for(int i = k; i<arr.size(); i++) {
             //first pop out of window element
             
             if(!q.empty() && (i - q.front())>=k ) {
                 q.pop();
             }
             
             //then push current element
             if(arr[i] < 0)
                q.push(i);
             
            // put in ans
            if(q.size() > 0) {
                 ans.push_back(arr[q.front()]);
            }
            else
            {
                ans.push_back(0);
            }
         }
        
        
        return ans;
    }
};