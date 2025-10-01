#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor 
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* removeNthFromEnd(Node* head, int n) {
        if(head->next == NULL){
            return NULL;
        }
        Node* temp = head;
        Node* mover = head;
        for(int i=0; i<n; i++){
            if(mover->next){
                mover = mover->next;
            }else return head->next;
            
        }

        while(mover->next ){
            mover = mover->next;
            temp = temp->next;
        }

        temp->next = temp->next->next;
        return head;
    }

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int N = 3;
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    head->next->next->next->next = new Node(arr[4]);

    // Delete the Nth node from the end 
    // and print the modified linked list
    head = removeNthFromEnd(head, N);
    printLL(head);
}