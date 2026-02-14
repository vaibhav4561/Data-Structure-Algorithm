class node{
    public:
        int data;
        int row;
        int col;
    node(int data, int r, int c){
        this->data = data;
        row = r;
        col = c;
    }
};

class compare{
    public:
    bool operator()(node* a, node* b){
        return a->data > b->data;
    }
};

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int k = nums.size();
        int mini = INT_MAX, maxi = INT_MIN;
        priority_queue<node*, vector<node*>, compare> minHeap;

        for(int i=0;i<k;i++){
            int el = nums[i][0];
            mini = min(mini, el);
            maxi = max(maxi, el);
            minHeap.push(new node(el, i, 0));
        }        
        vector<int> range = {mini, maxi};

        while(!minHeap.empty()){
            node* temp = minHeap.top();
            minHeap.pop();

            mini = temp->data;

            if(maxi- mini < range[1]-range[0] ||
                    (maxi - mini == range[1] - range[0] && mini < range[0])){
                range[0] = mini;
                range[1] = maxi;
            }

            if(temp->col + 1 < nums[temp->row].size()){
                maxi = max(maxi, nums[temp->row][temp->col + 1]);
                minHeap.push(new node(nums[temp->row][temp->col + 1], temp->row, temp->col + 1));
            }
            else{
                break;
            }
        }
        return range;
    }
};