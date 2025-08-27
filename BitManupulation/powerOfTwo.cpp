#include <iostream>
#include <math.h>
using namespace std;
bool isPowerOfTwo(int n) {
    
       if(n>0 && (n & (n-1)) == 0){
        return true;
       }
        return false;
    
    }
int main(){
   int n;
   cin>>n;
   
   cout<<isPowerOfTwo(n);
}
