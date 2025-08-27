#include <bits/stdc++.h> 
using namespace std;

int maxSubArray(vector<int>& nums) {
        int sum = 0, maxi = INT_MIN ;
        int left = 0, right = 0;
        for(int i = 0; i<nums.size() ; i++){
            sum += nums[i];
            
            if(sum > maxi){
                maxi = sum;
                right = i;
            }
            if(sum < 0) {
                sum = 0;
                left = i+1;
            }
        }
        cout<< left<<" "<<right;
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

    cout<<maxSubArray(arr);
}