#include <bits/stdc++.h>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n) {
    int idx = m + n -1;
    int left = m-1;
    int right = n-1;
    while(left >= 0 && right >= 0){
        if(nums1[left] >= nums2[right]){
            nums1[idx] = nums1[left];
            idx--;
            left--;
        }
        else{
            nums1[idx] = nums2[right];
            idx--;
            right--;
        }
    }
    while(right >= 0){
        nums1[idx] = nums2[right];
        idx--;
        right--;
    }
    return ;
    
}

int main()
{
    int arr1[] = {1, 4, 8, 10, 0, 0, 0};
    int arr2[] = {2, 3, 9};
    int m = 4, n = 3;
    merge(arr1, m, arr2, n);
    cout << "The merged arrays are: " << "\n";
    for (int i = 0; i < m+n; i++) {
        cout << arr1[i] << " ";
    }
    
    cout << endl;
    return 0;
}