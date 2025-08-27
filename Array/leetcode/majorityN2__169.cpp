#include <bits/stdc++.h> 
using namespace std;

int majorityElement1(vector<int>& v) {
    int n = v.size();
    map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        mpp[v[i]]++;
    }

    for (auto it : mpp) {
        if (it.second > (n / 2)) {
            return it.first;
        }
    }

    return -1;
}


int majorityElement2(vector<int>& nums){
    int count = 0;
    int ans;

    for(int i = 0; i<nums.size(); i++){
        if(count == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return ans;
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

    cout<<majorityElement2(arr);

    

}