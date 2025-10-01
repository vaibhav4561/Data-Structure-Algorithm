#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};

ListNode *head, *tail; 

void PrintList(ListNode *head) // Function to print the LinkedList
{
    ListNode *curr = head;
    for (; curr != nullptr; curr = curr->next)
        cout << curr->val << "-->";
    cout << "null" << endl;
}


void InsertatLast(int value) // Function for creating a LinkedList
{

    ListNode *newnode = new ListNode(value);
    if (head == nullptr)
        head = newnode, tail = newnode;
    else
        tail = tail->next = newnode;
}


ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* temp = head;
        ListNode* even = head->next;
         ListNode* evenHead = even;
        
        while(even && even->next){
            temp->next = even->next;
            temp = temp->next;
            even->next = temp->next;
            even = even->next;
            
        }
        temp->next = evenHead;
        return head;
    }


int main()
{
    InsertatLast(1);
    InsertatLast(2);
    InsertatLast(3);
    InsertatLast(4);
    cout << "Initial LinkedList : " << endl;
    PrintList(head);
    ListNode *newHead = oddEvenList(head);
    cout << "LinkedList After Segregration " << endl;
    PrintList(newHead);
    return 0;
}