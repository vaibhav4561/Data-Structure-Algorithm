#include <iostream>
using namespace std;

class Heap{
    public:
    int arr[101];
    int size;

    Heap(){
        size = 0;
    }

    void insert(int value){
        // end m insert karo
        size = size + 1;
        int idx = size;
        arr[idx] = value;

        // value ko shi place m lagao
        while(idx > 1 && arr[idx/2] < value){
            swap(arr[idx/2],arr[idx]);
            idx = idx/2;
        }
    }

    int deleteEl(){
        if(size == 0) return -1;

        int ans = arr[1];
        //replace root(first) value with last
        arr[1] = arr[size];
        size--;

        //place root data to correct position
        int idx = 1;
        while(idx <= size){
            int left = 2*idx;
            int right = 2*idx+1;

            int largest = idx;

            if(left <= size && arr[largest] < arr[left]){
                largest = left;
            }
            if(right <= size && arr[largest] < arr[right]){
                largest = right;
            }

            if(largest == idx){
                break;
            }
            else{        
                swap(arr[idx],arr[largest]);
                idx = largest;
            }
        }
        return ans;
    }
};

int main(){
    Heap h;
    h.arr[0] = -1;
    // h.arr[1] = 100;
    // h.arr[2] = 50;
    // h.arr[3] = 60;
    // h.arr[4] = 40;
    // h.arr[5] = 45;
    // h.size = 5;

    h.insert(50);
    h.insert(30);
    h.insert(70);
    h.insert(40);
    h.insert(80);
    h.insert(100);
    

    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }cout<<endl;

    h.deleteEl();

    for(int i=0;i<=h.size;i++){
        cout<<h.arr[i]<<" ";
    }cout<<endl;

    return 0;
}