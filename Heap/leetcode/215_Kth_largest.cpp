class Solution {   
public:
    int findKthLargest(vector<int>& arr, int k) {
        int n = arr.size();
        //create min heap
        priority_queue<int, vector<int>, greater<int> > pq;
        //insert first k  element
        for(int i=0;i<k;i++){
            pq.push(arr[i]);
        }
        // for remaining only if thy are small
        for(int i=k;i<n;i++){
            if(pq.top() < arr[i]){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};