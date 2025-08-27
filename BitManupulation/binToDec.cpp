#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int bit;
    cin>>bit;
    int ans = 0;
    int i = 0;
    while(bit != 0){
        int digit = bit % 10;
        
        if(digit == 1){
            ans = pow(2 , i) + ans;
        }
        bit = bit/10;
        i++;
    }
    cout<<ans;

}
