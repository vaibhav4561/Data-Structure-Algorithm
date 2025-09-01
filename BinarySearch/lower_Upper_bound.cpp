
#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}


int upperBound(vector<int> &arr, int x, int n) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        // maybe an answer
        if (arr[mid] > x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}


int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 8;

    //in built
    // auto low = lower_bound(arr.begin(), arr.end(), 8);
    // cout<< (low - arr.begin()) << std::endl; 


    int lowind = lowerBound(arr, n, x);
    cout << "The lower bound is the index: " << lowind << "\n";
     int Upind = upperBound(arr, x, n);
    cout << "The upper bound is the index: " << Upind << "\n";
    
    return 0;
}
