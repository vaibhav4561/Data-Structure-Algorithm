#include<bits/stdc++.h>
using namespace std;

void printArr(vector<int>& arr, int size){
    for(int i=0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    
}

void sort0_1_2(vector<int> &arr, int n)
{
    
	int low = 0, mid = 0, high = n-1;
   while(mid <= high){
      if(arr[mid] == 0){
         swap(arr[low], arr[mid]);
         low++;
         mid++;
      }
      else if(arr[mid] == 1){
         mid++;
      }
      else{
         swap(arr[mid], arr[high]);
         high--;
      }
   }	

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

    sort0_1_2(arr,n);
    printArr(arr,n);


}