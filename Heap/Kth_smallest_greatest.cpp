#include <iostream>
#include <queue>
using namespace std;

int getKthSmallest(int arr[],int n, int k){
    //create max heap
    priority_queue<int> pq;
    //insert first k  element
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    // for remaining only if thy are small
    for(int i=k;i<n;i++){
        if(pq.top() > arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}

int getKthGreatest(int arr[],int n, int k){
    //create min heap
    priority_queue<int, vector<int>, greater<int> > pq;
    //insert first k  element
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    // for remaining only if thy are small
    for(int i=k;i<n;i++){
        if(pq.top() < arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}

int main(){
    int arr[] = {10,5,20,4,12};
    int n = 5;
    int k = 2;
    int small = getKthSmallest(arr,n,k);
    int great = getKthGreatest(arr,n,k);
    cout<<"kth smallest element: "<<small<<endl;
    cout<<"kth smallest element: "<<great<<endl;

}
