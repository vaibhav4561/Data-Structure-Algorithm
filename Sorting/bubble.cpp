#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[],int n){
    for(int i= n-1; i>=0;i--){
        int didswap =0;
        for(int j=0; j<= i-1; j++){
            if(arr[j] > arr[j+1]){
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didswap = 1;
            }
        } 

        if(didswap == 0) break;
    }    
}

void recursive_bubble(int arr[], int n){
    if(n==1) return;
    for(int i =0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    recursive_bubble(arr,n-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }
    //   bubble(arr,n);
    recursive_bubble(arr,n);

    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}