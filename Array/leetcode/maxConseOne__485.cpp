#include <bits/stdc++.h> 
using namespace std;

int maxConsecutiveOne(vector<int>& nums) {
         int n = nums.size();
        int cnt1 =0;
        int maxi = 0;

        for(int i = 0;i< n; i++){
            if(nums[i] == 1){
                cnt1++;
                maxi = max(cnt1 , maxi);
            }
            else{
                cnt1 =0;
            }
        }
        
        return maxi;
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

    cout<<maxConsecutiveOne(arr);

    

}