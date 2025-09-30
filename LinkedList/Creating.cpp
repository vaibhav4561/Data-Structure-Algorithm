#include<iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    public:
        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }
};

int main(){
    vector<int> arr = {2,5,3,9};
    Node* y = new Node(arr[2], nullptr);
    cout<<y<<"\n";
    cout<<y->data;
}