#include <iostream>
#include <queue>
using namespace std;

int main(){

    // max heap 
    // priority_queue<int> pq;
    // pq.push(3);
    // pq.push(6);
    // pq.push(8);
    // pq.push(4);
    // pq.push(9);

    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;
    // pq.pop();

    // min heap
    priority_queue<int, vector<int>, greater<int> > pq;
    pq.push(3);
    pq.push(6);
    pq.push(8);
    pq.push(4);
    pq.push(9);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    pq.pop();
    





    return 0;
}