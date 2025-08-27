#include <iostream>
#include <math.h>
using namespace std;

int compliment(int n){
  if(n==0) 
       return 1;
       
       int m=n;
       int mask=0;
      while(m!=0){
           mask= (mask << 1) | 1;
           m = m >> 1;

    }

    int ans = (~n) & mask;
    return ans;
}
int main(){
   int n;
   cin>>n;
   
   cout<<compliment(n);
}
