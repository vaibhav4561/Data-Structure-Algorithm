#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompilating hash array
    //maximum element will be 12 then take plus 1 size
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]] += 1;
    }

    int max = 0;
    int min = n;
    int maxEl , minEl;
    for (auto val : mp){
        if(val.second > max){ 
            max = val.second;
            maxEl = val.first;
        }

        if(val.second < min){
            min = val.second;
            minEl = val.first;
        }
    }

    cout<<maxEl<<"  "<<minEl;
}