class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int i=0, j= n-1;
        int score = 0;

        for(int i=0; i<k; i++){
            if(nums[i] < nums[j]){
                sum += nums[j];
                j--;
            }
            else if(nums[i] > nums[j]){
                sum += nums[i];
                i++;
            }
            else{
                
            }
            if
        }
    }
};