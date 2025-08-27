#include <bits/stdc++.h> 
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int largest = arr[0];
    int Slargest = INT_MIN;

    for(int i =0;i<n;i++){
        if(arr[i] > largest){
            Slargest =largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > Slargest){
            Slargest = arr[i];
        }
    }

    if(Slargest == INT_MIN) return -1;
    return Slargest;
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

    cout<<findSecondLargest(n,arr);

    

}