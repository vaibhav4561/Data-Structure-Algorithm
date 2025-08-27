// move all zeros to the left

#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i =1;i< nums.size() ; i++){
            if(nums[j] != 0) j++;
            if(nums[j] == 0 && nums[i] != 0){
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                j++;
            }
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

    moveZeroes(arr);

    for(int i=0; i< n; i++){
        cout<<arr[i]<<" ";
    }
}