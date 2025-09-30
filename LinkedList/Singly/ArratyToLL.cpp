#include<iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }

        Node(int data1){
            data = data1;
            next = nullptr;
        }
};

//------------- C O N V E R S I O N ------------
Node* convertToLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main(){
    vector<int> arr = {2,5,3,9};
    Node* head = convertToLL(arr);
    
    //----------- T R A V E R S E --------
    Node* temp = head;
    while(temp){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }

}