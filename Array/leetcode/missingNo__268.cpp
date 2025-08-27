#include <bits/stdc++.h> 
using namespace std;

int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = (n * (n+1))/2;
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum += nums[i];
        }
        return total-sum;
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

    cout<<missingNumber(arr);

    

}