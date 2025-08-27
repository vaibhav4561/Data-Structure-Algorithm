#include <bits/stdc++.h>
using namespace std;

void selection(int arr[],int n){
    for(int i =0;i<n-1;i++){
        int mini = i;
        for(int j=i;j<n;j++){
            if(arr[mini] > arr[j]){
                mini =j;
            }
        }
        
        //swap
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    selection(arr,n);

    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}