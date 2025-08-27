#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[],int n){
    for(int i =0;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            //swap
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

void recursive_insertion(int arr[],int i,int n){

    if(i== n) return; 

    int j =i;
    while(j>0 && arr[j-1] > arr[j]){
            //swap
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }

    recursive_insertion(arr,i+1,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    //  insertion(arr,n);

    recursive_insertion(arr,0,n);

    for(int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}