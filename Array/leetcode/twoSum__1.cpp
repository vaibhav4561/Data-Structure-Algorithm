#include <bits/stdc++.h> 
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    unordered_map <int, int> mp;
    for(int i =0; i<nums.size() ;i++){
        int num = nums[i];
        int remain = target - num;
        if(mp.find(remain) != mp.end()){
            return {mp[remain] , i};
        }
        mp[num] = i;
    }
    return {-1,-1};
}

int main(){
    int n, k;
    cin>>n;
    vector<int> arr;
    for(int i= 0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cin>>k;

    vector<int> ans = twoSum(arr , k);

    cout<<ans[0]<<"  "<<ans[1];
    

}