#include <iostream>
using namespace std;

void print1(int n){
    for(int i=1 ; i<= n; i++){
        for(int j=1; j<= i ;j++){
            cout<<j;
        }
         for(int j=1; j<=2*(n-i) ;j++){
            cout<<" ";
        }
         for(int j=i; j>= 1 ;j--){
            cout<<j;
        }
       cout<<endl;
    }
}

void print2(int n){
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

void print3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<char(j+64)<<" ";
        }
        cout<<endl;
    }
}

void print4(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<"  ";
        }

        char ch = 'A';
        int breakpoint = (2*i + 1)/2;
        for(int j=1; j<=2*i+1 ; j++){
            cout<<ch<<" ";
            if(j<= breakpoint) ch++;
            else ch--;
        }

        cout<<endl;
    }
}

void print5(int n){
    for(int i=0; i<n; i++){
        for(char ch ='E'-i; ch<= 'E'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
   int n;
   cin >> n;
   print5(n); 
}