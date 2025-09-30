#include <bits/stdc++.h>
using namespace std;

bool ifPossible(vector<int> stalls, int k, int mid){
    int count = 1; int last = stalls[0];
    for(int i= 1; i< stalls.size(); i++){
        if((stalls[i] - last ) >= mid){
            count ++;
            last = stalls[i];
        }
        if(count >= k) return true;
    }
    
    return false;
}

int aggressiveCows(vector<int> stalls, int k){
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int low = 1;
    int high = stalls[n-1] - stalls[0] ;
    while(low <= high){
        int mid = (low + high)/2;
        if(ifPossible(stalls,k,mid)){
            low = mid +1;
        }
        else{
            high = mid - 1;
        }
    }
    return high ;
}

int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int k = 4;
    int ans = aggressiveCows(stalls, k);
    cout << "The maximum possible minimum distance is: " << ans << "\n";
    return 0;
}