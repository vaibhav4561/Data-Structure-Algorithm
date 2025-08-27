#include <bits/stdc++.h> 
using namespace std;

int singleNumber(vector<int>& nums) {
        int xor1 = 0;
        for(int i = 0; i<nums.size(); i++){
            xor1 = xor1 ^ nums[i];
        }

        return xor1;
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

    cout<<singleNumber(arr);

    

}