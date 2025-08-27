#include<iostream>
using namespace std;

void printArr(int arr[], int size){
    for(int i=0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    
}

void findUnique(int arr[], int size){
    
    // for(int i=0; i< size; i++){
    //     int flag =1;
    //     for(int j=1; j<size;j++){
    //         if(arr[i] == arr[j]) {
    //             flag =0;
    //             break;
    //         }
    //     }
    //     if(flag == 1){
    //         cout<<arr[i]<<" ";
    //     }
        
    // }

    int ans = 0;

    for(int i = 0; i<size; i++){
        ans = ans ^ arr[i];
    }
    cout<<ans;
    
}

int main(){
    
    int arr[7] = {3,2,7,2,1,3,7};

    findUnique(arr, 7);

}