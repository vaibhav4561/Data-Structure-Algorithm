#include<iostream>
using namespace std;

void printArr(int arr[], int size){
    for(int i=0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    
}
void swapAlternate(int arr[] , int size){

    for(int i= 0 ; i< size; i+= 2){
        if(i+1 < size){
        swap(arr[i],arr[i+1]);
    }
}
    
    printArr(arr, size);
    
}
int main(){
    int arr1[5] = {2,6,4,9,1};
    int arr2[6] = {3,2,6,0,1,7};

    swapAlternate(arr1, 5);
    cout<<endl;
    swapAlternate(arr2, 6);

}