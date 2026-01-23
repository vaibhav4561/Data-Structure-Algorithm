#include <iostream>
using namespace std;

void heapify(int arr[],int n, int i){
    int idx = i;
    int left = 2*idx;
    int right = 2*idx+1;

    int largest = idx;

    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }
    if(largest != idx){
        swap(arr[idx],arr[largest]);
        idx = largest;
        heapify(arr, n, idx);
    }
}

void buildHeap(int arr[], int n){
    for(int i=n/2; i>0; i--){
        heapify(arr, n ,i);
    }
}

void heapSort(int arr[],int n){

    while(n != 1){
        swap(arr[1],arr[n]);
        n--;

        heapify(arr, n, 1);

    }
}

int main(){
    int arr[] = {-1,12,15,13,11,14};
    int n = 5;
    buildHeap(arr, n);

    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    heapSort(arr, n);
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}