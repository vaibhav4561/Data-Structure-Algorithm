#include<iostream>
using namespace std;

void printArr(int arr[], int size){
    for(int i=0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    
}

void sortZeroesAndOne(int input[], int size)
{
      int i =0;
    int j= size-1;

    while(i<j){

        while(input[i] == 0 && i<j) i++;

        while(input[j] == 1 && i<j) j++;

        if(input[i] == 1 && input[j] == 0 && i<j){
            swap(input[i],input[j]);
            i++;
            j--;
        }
    }

}


int main(){
    
    int arr[7] = {0,1,0,0,1,1,0};

    sortZeroesAndOne(arr,7);
        printArr(arr,7);


}