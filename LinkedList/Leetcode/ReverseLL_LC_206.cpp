
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;   
    
    Node* next;      

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* reverseList(Node* head) {
        if(head == NULL){
            return head;
        }
        if(head->next == NULL) return head;
        Node* temp = head;
        Node* prev = nullptr;
        while(temp){
            Node* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
        
    }
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);

    cout << "Original Linked List: ";
    printLinkedList(head);

    head = reverseList(head);

    cout << "Reversed Linked List: ";
    printLinkedList(head);

    return 0;
}