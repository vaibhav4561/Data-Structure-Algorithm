#include<iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* back;

        Node(int data1, Node* next1, Node* back1){
            data = data1;
            next = next1;
            back = back1;
        }

        Node(int data1){
            data = data1;
            next = nullptr;
            back = nullptr;
        }
};

//------------- C O N V E R S I O N ------------
Node* convertToDLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
}

Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}


Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* prevtail = tail->back;
    prevtail->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head;
}

Node* deleteKth(Node* head, int k){
    if(head == NULL){
        return NULL;
    }
    int cnt =0;
    Node* KNode = head;
    while(KNode != NULL){
        cnt++;
        if(cnt == k) break;
        KNode = KNode->next;
    }
    Node* prev = KNode->back;
    Node* front = KNode->next;

    if(prev == NULL && front == NULL){
        return NULL;
    }
    else if(prev ==NULL){
        return deleteHead(head);
    }
    else if(front == NULL){
        return deleteTail(head);
    }

    prev->next = front;
    front->back = prev;

    KNode->next = nullptr;
    KNode->back = nullptr;

    delete KNode;
    return head;
}

int main(){
    vector<int> arr = {2,5,3,9};
    Node* head = convertToDLL(arr);

    // head = deleteHead(head);
   
    // head= deleteTail(head);
    
    head = deleteKth(head, 2);
    print(head);
    

}