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

// ----------- DELETE HEAD -------------
Node* deleteHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;

}

// ------------ DELETE TAIL ------------
Node* deleteTail(Node* head) {
    if (head == NULL || head->next == NULL)
        return NULL;
    Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

// ----------- DELETE KTH -------------
Node* deleteK(Node* head, int k) { 
    if (head == nullptr || k <= 0) 
        return head;
    
    if(k == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    
    int cnt = 0;

    Node* temp = head;
    Node* prev = nullptr;
    while (temp != nullptr) {
        cnt++;
        if (cnt == k) {
            prev->next = prev->next->next;
            free(temp);
            break;
        } 
        prev = temp;
        temp = temp->next;
    }
  
    return head;
}

// ----------DELETE ELEMENT ----------
Node* deleteEL(Node* head, int el) { 
    if (head == nullptr ) 
        return head;
    
    if(head->data == el){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = nullptr;
    while (temp != nullptr) {
        if (temp->data == el) {
            prev->next = prev->next->next;
            free(temp);
            break;
        } 
        prev = temp;
        temp = temp->next;
    }
  
    return head;
}

int main(){
    vector<int> arr = {2,5,3,9};
    Node* head = convertToLL(arr);

    // head = deleteHead(head);

    // head = deleteTail(head);

    // head = deleteK(head,2);

    head = deleteEL(head,5);

    Node* temp = head;
    while(temp){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }

}