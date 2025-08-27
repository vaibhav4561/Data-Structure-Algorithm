// move all zeros to the left

#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;

        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if(idx == -1){
             reverse(nums.begin(),nums.end());
             return;
        }

        for(int i = n-1;i> idx; i--){
            if(nums[i] > nums[idx]){
                swap(nums[i] ,nums[idx]);
                break;
            }
        }
        reverse(nums.begin() + idx +1, nums.end());
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

    nextPermutation(arr);

    for(int i=0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    
}