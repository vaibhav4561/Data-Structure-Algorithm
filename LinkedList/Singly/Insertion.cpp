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

// ------------ INSERT HEAD ---------
Node* insertHead(Node* head, int val){
    Node* temp = new Node(val,head);
    return temp;
}

// ----------- INSERT TAIL ---------
Node* insertTail(Node*head, int val){
    if(head == NULL){
        return new Node(val);
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

// ------------ INSERT AT K ---------
Node* insertK(Node* head,int val,int k){
    if(head == NULL){
        return new Node(val);
    }
    if(k==1){
        Node* temp = new Node(val,head);
        return temp;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k-1){
            Node* x = new Node(val);
            x->next = temp->next;
            temp->next = x;
            return head;
            break;
        }
        temp = temp->next;
    }
    return head;
}

// ---------- INSERT BEFORE X-----
Node* insertBefore(Node* head,int val,int x){
    if(head == NULL){
        return head;
    }
    if(head->data == x){
        return new Node(val,head);
        
    }
    
    Node* temp = head;
    while(temp->next != NULL){
       
        if(temp->next->data == x){
            Node* newNode = new Node(val,temp->next);
            temp->next = newNode;
            
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {2,5,3,9};
    Node* head = convertToLL(arr);

    head = insertHead(head,100);

    head =insertTail(head,100);

    head = insertK(head,50,3);

    head = insertBefore(head,10,5);
    
    Node* temp = head;
    while(temp){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }

}