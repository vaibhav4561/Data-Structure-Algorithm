#include <bits/stdc++.h> 
using namespace std;

// int longestSubarray(vector<int>& nums ,int k) {
//         map<int, int> preSum;
//         int sum =0;
//         int maxlen = 0;
//         for(int i=0; i<nums.size();i++){
//             sum += nums[i];
//             if(sum == k){
//                 maxlen = max(maxlen,i+1);
//             }
//             int rem = sum -k;
//             if(preSum.find(rem) != preSum.end()){    // rem nhi hona chaiye map m
//                 int len = i - preSum[rem];
//                 maxlen = max(maxlen, len);
//             }
//             if(preSum.find(sum) == preSum.end()){
//                 preSum[sum] = i;
//             }
//         }
//         return maxlen;
//     }

int longestSubarray2(vector<int>& nums ,int k){
    int left = 0, right = 0;
    int sum = nums[0];
    int maxLen = 0;
    while(right < nums.size()){
        while(left <= right && sum > k){
            sum -= nums[left];
            left--;
        }
        if(sum == k){
            maxLen = max(maxLen, right - left +1);
        }
        right++;
        if(right < nums.size()){
            sum += nums[right];
        }
    }
    return maxLen;
}

int main(){
    int n,k;
    cin>>n;
    vector<int> arr;
    for(int i= 0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cin>>k;
    cout<<longestSubarray2(arr,k);

    

}