// User function Template for C++

class Solution {
  public:
     void heapify(vector<int>& arr,int n, int i){
        int idx = i;
        int left = 2*idx+1;
        int right = 2*idx+2;
    
        int largest = idx;
    
        if(left < n && arr[largest] < arr[left]){
            largest = left;
        }
        if(right < n && arr[largest] < arr[right]){
            largest = right;
        }
        if(largest != idx){
            swap(arr[idx],arr[largest]);
            idx = largest;
            heapify(arr, n, idx);
        }
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // merge both heaps
        vector<int> ans;
        for(auto i:a){
            ans.push_back(i);
        }
        for(auto i:b){
            ans.push_back(i);
        }
        
        // heapify merge array
        int size = ans.size();
        for(int i=size/2 - 1; i>=0; i--){
            heapify(ans,size,i);
        }
        
        return ans;
        
    }
};