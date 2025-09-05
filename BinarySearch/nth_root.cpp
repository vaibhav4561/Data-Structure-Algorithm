#include <bits/stdc++.h>
using namespace std;

int NthRoot(int n, int m) {
    int low = 1;
    int high = m;
    //Binary search on the answers:
    while (low <= high) {
        long long mid = (low + high) / 2;
        
        if(pow(mid,n) == m){
            return mid;
        } 
        
        if (pow(mid,n) < m) {
            //eliminate the left half:
            low = mid + 1;
        }
        else {
            //eliminate the right half:
            high = mid - 1;
        }
    }
    return -1;
}


int main()
{
    int m = 27 , n = 3;
    cout <<NthRoot(n,m);
    return 0;
}