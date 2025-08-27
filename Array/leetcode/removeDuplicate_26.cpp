// remove duplicate from sorted array

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    
        int i =0;
        for(int j =0;j<nums.size();j++){
            if(nums[i] != nums[j] ){
                nums[i+1] = nums[j];
                i++;
            }
           
        }
        
        return i+1;
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

    cout<<removeDuplicates(arr);

    for(int i=0; i< n; i++){
        cout<<arr[i]<<" ";
    }
}