#include<iostream>
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
    int hash[13] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q; //no. of element you want to find frequecy
    cin>>q;
    while(q--){
        int num;
        cin>>num;

        // fetching from hash array
        cout<<hash[num]<<endl;
    }

}