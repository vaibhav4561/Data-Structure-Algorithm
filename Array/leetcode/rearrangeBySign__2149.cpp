// move all zeros to the left

#include<bits/stdc++.h>
using namespace std;

void rearrangeArray(vector<int>& nums) {
        int pos = 0 , neg = 1;
        vector<int> ans(nums.size(),0);
        for(int i = 0; i<nums.size() ; i++){
            if(nums[i] > 0){
                ans[pos] = nums[i];
                pos += 2;
            }
            else{
                ans[neg] = nums[i];
                neg += 2;
            }
        }
        for(int i=0; i< nums.size(); i++){
        cout<<ans[i]<<" ";
        }
        return ;
    }

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i= 0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    rearrangeArray(arr);

    
}