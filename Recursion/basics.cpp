#include<iostream>
using namespace std;

string print_name(string name, int n){
    if(n==0) return 0;
    cout<<name<<endl;
    n--;
    print_name(name,n);
}

int print_n_1(int i,int n){
    if(i > n){
        return 0;
    }
    print_n_1(i+1,n);
    cout<<i;
    
}

int main(){
    int n;
    cin>>n;

    // string name ="vaibhav";
    // print_name(name,n);

    print_n_1(1,n);
}